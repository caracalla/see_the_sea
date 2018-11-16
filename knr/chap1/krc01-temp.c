#include <stdio.h>

/* print Fahrenheit-Celsius conversion table for F values 0 - 300 */
main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;		/* lower limit of the temperature table */
	upper = 300;	/* upper limit of the temperature table */
	step = 20;		/* step size */

	fahr = lower;

	while(fahr <= upper)
	{
		celsius = 5.0 * (fahr - 32) / 9.0;
		printf("%3.0f\t%6.3f\n", fahr, celsius);
		fahr = fahr + step;
	}
}