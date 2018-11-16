#include <stdio.h>

/* Count characters in input, second version */

main()
{
	double nc;

	nc = 0;

	for(nc = 0; getchar() != EOF; ++nc)
	{
		;
	}

	printf("\nThis is how many characters you typed: %.0f\n", nc);
}