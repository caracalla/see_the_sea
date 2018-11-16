#include <stdio.h>

/* Example 01-04: print Celsius-Fahrenheit conversion table for F values 0 - 300 */
main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = -40;		/* lower limit of the temperature table */
	upper = 160;	/* upper limit of the temperature table */
	step = 20;		/* step size */

	celsius = lower;

	printf("-------------------------------\n");
	printf("Temperature Conversion, C to F:\n");
	printf("-------------------------------\n");

	while(celsius <= upper)
	{
		fahr = (celsius * 9.0 / 5.0) + 32.0;
		printf("%3.0f\t%6.3f\n", celsius, fahr);
		celsius = celsius + step;
	}
}