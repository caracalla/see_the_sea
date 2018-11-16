#include <stdio.h>

/* Example 01-06: ensure != EOF prints 1 or 0 depending on input */

main()
{
	printf("%d, %d\n", "e" != EOF, EOF != EOF);
}