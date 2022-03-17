#include "main.h"
/**
 *print_numbers - displays number 0-9
 *
 *Returns: 0 always (success)
 *
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
