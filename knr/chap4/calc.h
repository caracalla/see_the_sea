#define NUMBER '0'

// stack.c
void push(double value);
double pop();
void reset_stack();

// getop.c
char getop(char string[]);

// getch.c
int getch();
void ungetch(char character);
