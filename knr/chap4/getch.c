#include <stdio.h>

#define BUFFER_SIZE 100

char buffer[BUFFER_SIZE];
int buffer_pointer = 0;

char getch() {
  if (buffer_pointer > 0) {
    buffer_pointer -= 1;
    return buffer[buffer_pointer];
  } else {
    return getchar();
  }
}

void ungetch(char character) {
  if (buffer_pointer >= BUFFER_SIZE) {
    printf("ungetch: buffer overflow\n");
  } else {
    buffer[buffer_pointer] = character;
    buffer_pointer += 1;
  }
}
