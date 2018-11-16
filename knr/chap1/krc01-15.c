#include <stdio.h>

#define		LOWER	0		/* lower limit of table */
#define 	UPPER	300		/* upper limit of table */
#define		STEP	20		/* step size */
#define		FAHR	0		/* input temperature is Fahrenheit */
#define		CELS	1		/* input temperature is Celsius */

float temp_convert(int temp, int type);

/* print Fahrenheit-Celsius table with a for loop */
int main()
{
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
	{
		printf("%3d %6.3f\n", fahr, temp_convert(fahr, FAHR));
	}

	return 0;
}

/* convert from one temperature scale to another */
float temp_convert(int temp, int type)
{
	float result;

	if (type == CELS)
		result = (9.0 * temp / 5.0) + 32;
	else if (type == FAHR)
		result = (5.0 / 9.0) * (temp - 32);
	else /* return -1 due to improper input */
		result = -1;

	return result;
}