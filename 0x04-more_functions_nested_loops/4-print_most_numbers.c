#include "main.h"
/**
 *print_most_numbers - displays number 0-9
 *
 *Returns: 0 always (success)
 *
 */

void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	if (c != 50 && c != 52)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
