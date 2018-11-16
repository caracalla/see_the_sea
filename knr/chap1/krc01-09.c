#include <stdio.h>

/* Example 01-09: Replace multiple spaces with one space */

main()
{
	int c, consecutive_spaces;

	consecutive_spaces = 0;
	c = getchar();

	while(c != EOF)
	{
		if (c == ' ')
		{
			consecutive_spaces++;
		}
		else
		{
			if (consecutive_spaces > 0)
			{
				putchar(' ');
				consecutive_spaces = 0;
			}
			
			putchar(c);
		}
		
		c = getchar();
	}
}