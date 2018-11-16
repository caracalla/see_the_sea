#include <stdio.h>

/* Count lines in input */

main()
{
	int c, nl;

	nl = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			++nl;
		}
	}

	printf("You entered %d lines.\n", nl);
}