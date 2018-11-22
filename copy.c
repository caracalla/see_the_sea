/* From "The Design of the UNIX Operating System, page 8 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char buffer[2048];

void copy(int old_fd, int new_fd) {
  int buffer_size = sizeof(buffer);
  int count = read(old_fd, buffer, buffer_size);
  int write_result = 0;

  while (count > 0) {
    write_result = write(new_fd, buffer, count);
    
    if (write_result < 0) {
      printf("write failed!\n");
      exit(1);
    }

    count = read(old_fd, buffer, buffer_size);
  }
}

int main(int argc, char *argv[]) {
  int old_fd;
  int new_fd;

  if (argc != 3) {
    printf("two arguments are required!\n");
    exit(1);
  }

  old_fd = open(argv[1], O_RDONLY);

  if (old_fd == -1) {
    printf("can't open file to copy!\n");
    exit(1);
  }

  new_fd = creat(argv[2], 0666);

  if (new_fd == -1) {
    printf("can't create new file!\n");
    exit(1);
  }

  copy(old_fd, new_fd);

  return 0;
}
