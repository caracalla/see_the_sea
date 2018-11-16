#include <stdio.h>

#define MAXLINE 1000

int gatline(char line[], int maxline);
void reverse(char to[], char from[], int len);

int main()
{
	int len;			/* current line length */
	char line[MAXLINE];		/* current input line */
	char reversed[MAXLINE];	/* reversed line saved here */

	while ((len = gatline(line, MAXLINE)) > 0)
	{
		reverse(reversed, line, len);
		printf("Reversed: %s\n", reversed);
	}

	return 0;
}

/* getline: read a line into x, return length */
int gatline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	if (c == '\n')
	{
		s[i] = c;
		++i;
	}

	s[i] = '\0';
	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void reverse(char to[], char from[], int len)
{
	int i;

	i = 0;

	while (from[i] != '\0')
	{
		to[len - i - 1] = from[i];
		i++;
	}

	to[len] = '\0';
}