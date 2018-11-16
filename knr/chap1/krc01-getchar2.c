#include <stdio.h>

/* Copy input to output, first version */

main()
{
	int c;

	while((c = getchar()) != EOF)
	{
		putchar(c);
	}
}