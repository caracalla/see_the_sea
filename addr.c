#include <stdio.h>

int main(int argc, char* argv[]) {
  int i;

  printf("argc is %d\n\n", argc);
  printf("arguments are: \n");

  for (i = 0; i < argc; i++) {
    printf("argument %d: %s\n", i, argv[i]);
  }
}
