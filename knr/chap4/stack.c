#include <stdio.h>
#include "calc.h"

#define MAXVAL 100

int stack_pointer = 0;
double stack[MAXVAL];

void push(double value) {
  if (stack_pointer < MAXVAL) {
    stack[stack_pointer] = value;
    stack_pointer += 1;
  } else {
    printf("error: stack full\n");
  }
}

double pop() {
  if (stack_pointer > 0) {
    stack_pointer -= 1;
    return stack[stack_pointer];
  } else {
    printf("error: stack empty\n");
    return 0.0;
  }
}

void reset_stack() {
  stack_pointer = 0;
  stack[stack_pointer] = 0;
}
