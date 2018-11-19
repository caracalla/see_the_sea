#include <stdio.h>
#include <ctype.h>
#include "calc.h"

char getop(char string[]) {
  int i;
  
  string[0] = getch();

  while (string[0] == ' ' || string[0] == '\t') {
    string[0] = getch();
  }

  if (!isdigit(string[0]) && string[0] != '.') {
    // not a number, must be an operator

    // handle negative numbers
    if (string[0] == '-') {
      // grab the second character to see if it's negative number
      string[1] = getch();
      ungetch(string[1]);

      if (!isdigit(string[1])) {
        return string[0];
      }
    } else {
      return string[0];
    }
  }

  i = 0;

  do {
    i += 1;
    string[i] = getch();
  } while (isdigit(string[i]));

  if (string[i] == '.') {
    i += 1;
    string[i] = getch();

    while (isdigit(string[i])) {
      i += 1;
      string[i] = getch();
    }
  }

  if (string[i] != EOF) {
    ungetch(string[i]);
  }

  string[i] = '\0';

  return NUMBER;
}
