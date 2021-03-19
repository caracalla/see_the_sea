#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>

int main() {
  struct dirent *dp;
  struct stat statbuf;

  DIR *dirp = opendir(".");

  if (dirp == NULL) {
    printf("unable to open directory\n");
    return 1;
  }

  while ((dp = readdir(dirp)) != NULL) {
    if (strlen(dp->d_name) > 0 && dp->d_name[0] != '.') {
      printf("file name: %s, d_ino: %llu\n", dp->d_name, dp->d_ino);

      int stat_res = stat(dp->d_name, &statbuf);

      if (stat_res == -1) {
        printf("  could not stat file\n\n");
        continue;
      }

      if (S_ISREG(statbuf.st_mode)) {
        printf("  it's a regular file\n");
      } else if (S_ISDIR(statbuf.st_mode)) {
        printf("  it's a directory\n");
      } else {
        printf("  it's not a regular file or a directory\n");
      }
    }
  }

  return closedir(dirp);
}
