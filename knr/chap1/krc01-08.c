#include <stdio.h>

/* Example 01-08: Count lines, tabs and spaces in input */

main()
{
	int c, nl, tabs, spaces;

	nl = 0;
	tabs = 0;
	spaces = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			++nl;
		}

		if (c == '\t')
		{
			++tabs;
		}

		if (c == ' ')
		{
			++spaces;
		}
	}

	printf("You entered %d lines, %d tabs, and %d spaces.\n", nl, tabs, spaces);
}