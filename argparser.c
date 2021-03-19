#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
  longopt,
  shortopt,
  shortopt_multi,
  notopt
} arg_type;

arg_type get_arg_type(size_t arglen, char *current_arg) {
  if (arglen > 1 && current_arg[0] == '-') {
    if (current_arg[1] == '-') {
      // it's a long-opt (or just "--"?)
      return longopt;
    } else {
      if (arglen == 2) {
        // it's a single short-opt
        return shortopt;
      } else {
        // it's multiple short-opts
        return shortopt_multi;
      }
    }
  } else {
    // it's something else
    return notopt;
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
      case longopt:
        printf("it's a longopt\n");
        break;
      case shortopt_multi:
        printf("it's multiple shortopts\n");
        break;
      case shortopt:
        printf("it's a single shortopt\n");
        break;
      case notopt:
        printf("it's not an opt at all!\n");
        break;
      default:
        printf("I have no idea what it is!\n");
        break;
    }

    i++;
  }
}
