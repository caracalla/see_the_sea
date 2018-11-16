#include <stdio.h>

/* Example 01-05: print Fahrenheit-Celsius table with a for loop */

main()
{
	int fahr;

	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
	{
		printf("%3d %6.3f\n", fahr, (5.0/9.0) * (fahr - 32));
	}
}