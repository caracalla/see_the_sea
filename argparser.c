#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char get_arg_type(size_t arglen, char *current_arg) {
  if (arglen > 1 && current_arg[0] == '-') {
    if (current_arg[1] == '-') {
      // it's a long-opt (or just "--"?)
      return 'l';
    } else {
      if (arglen == 2) {
        // it's a single short-opt
        return 's';
      } else {
        // it's multipel short-opts
        return 'm';
      }
    }
  } else {
    // it's something else
    return 0;
  }
}

int main(int argc, char *argv[]) {
  int i = 1;
  char *current_arg;
  size_t arglen;
  char arg_type;

  while (i < argc) {
    current_arg = argv[i];
    arglen = strlen(current_arg);

    arg_type = get_arg_type(arglen, current_arg);

    switch (arg_type) {
      case 'l':
        printf("it's a longopt\n");
        break;
      case 'm':
        printf("it's multiple shortopts\n");
        break;
      case 's':
        printf("it's a single shortopt\n");
        break;
      case 0:
        printf("it's not an opt at all!\n");
        break;
      default:
        printf("I have no idea what it is!\n");
        break;
    }

    i++;
  }
}
