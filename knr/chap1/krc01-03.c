#include <stdio.h>

/* Example 01-03: print Fahrenheit-Celsius conversion table for F values 0 - 300 with header */

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;		/* lower limit of the temperature table */
	upper = 300;	/* upper limit of the temperature table */
	step = 20;		/* step size */

	fahr = lower;

	printf("-------------------------------\n");
	printf("Temperature Conversion, F to C:\n");
	printf("-------------------------------\n");

	while(fahr <= upper)
	{
		celsius = 5.0 * (fahr - 32) / 9.0;
		printf("%3.0f\t%6.3f\n", fahr, celsius);
		fahr = fahr + step;
	}
}