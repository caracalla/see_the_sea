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
    return string[0];
  }

  i = 0;

  while (isdigit(string[i])) {
    i += 1;
    string[i] = getch();
  }

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
