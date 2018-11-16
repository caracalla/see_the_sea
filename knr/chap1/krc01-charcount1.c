#include <stdio.h>

/* Count characters in input, first version */

main()
{
	long nc;

	nc = 0;

	while(getchar() != EOF)
	{
		++nc;
	}

	printf("\nThis is how many characters you typed: %ld\n", nc);
}