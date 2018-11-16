#include <stdio.h>

#define IN 1
#define OUT 0

/* Example 01-13: Prints a histogram of word lengths from input */

int main()
{
	int c, i, j, wordlength, state;
	int histo[10];

	wordlength = 0;
	state = OUT;

	for (i = 0; i < 10; ++i)
		histo[i] = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			if (state == IN)
			{
				state = OUT;

				if (wordlength >= 9)
					histo[9]++;
				else
					histo[wordlength]++;

				wordlength = 0;
			}
		}
		else if (state == OUT)
		{
			state = IN;
			wordlength++;
		}
		else
		{
			wordlength++;
		}
	}

	printf("Histogram:\n");

	for (i = 0; i < 10; ++i)
	{
		printf("%d: ",i);

		for (j = 0; j < histo[i]; ++j)
			printf("#");

		printf("\n");
	}
}