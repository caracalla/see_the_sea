#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

#define MAX_OPERATIONS 100

int main() {
  char string[MAX_OPERATIONS];
  double second_operand;
  char type = getop(string);

  while (type != EOF) {
    switch (type) {
      case NUMBER:
        push(atof(string));
        break;
      case '+':
        push(pop() + pop());
        break;
      case '-':
        second_operand = pop();
        push(pop() - second_operand);
        break;
      case '*':
        push(pop() * pop());
        break;
      case '/':
        second_operand = pop();
        push(pop() / second_operand);
        break;
      case '%':
        second_operand = pop();
        push((int)pop() % (int)second_operand);
        break;
      case '\n':
        printf("\t%.8g\n", pop());
        reset_stack();
        break;
      default:
        printf("error: unknown command %s\n", string);
        break;
      }

    type = getop(string);
  }

  return 0;
}
