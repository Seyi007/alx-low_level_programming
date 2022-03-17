#include "main.h"
/**
 *more_numbers - displays number 0-14 ten times
 *
 *Returns: 0 always (success)
 *
 */

void more_numbers(void)
{
	int x;
	int y;
	int z;

	while (z <= 10)
	{
		for (x = 48; x <= 57; x++)
		{
			putchar(x);
		}
		for (y = 'a'; y < 'f'; y++)
		{
			putchar(y);
		}

		putchar('\n');
	z++;
	}
	return (0);
}
