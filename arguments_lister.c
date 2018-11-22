#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
  int i;

  for (i = 1; i < argc; i++) {
    int arg_len = strlen(argv[i]);
    printf("argument %d: %s, length: %d, sizeof(argv[%d]): %lu\n", i, argv[i], arg_len, i, sizeof(argv[i]));
  }

  printf("sizeof(argv): %lu\n", sizeof(argv));
}
