#include <stdio.h>

/* Example 01-10: Replace tab with \t, backspace with \b, and backslash with \\ */

main()
{
	int c;

	c = getchar();

	while(c != EOF)
	{
		if (c == '\t')
		{
			putchar('\\');
			putchar('t');
		}
		else if (c == '\b')
		{
			putchar('\\');
			putchar('b');
		}
		else if (c == '\\')
		{
			putchar('\\');
			putchar('\\');
		}
		else
		{
			putchar(c);
		}
		
		c = getchar();
	}
}