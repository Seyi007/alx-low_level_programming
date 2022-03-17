#include "main.h"
/**
 *print_numbers - print number 0-9
 *
 *Returns: 0 always (success)
 *
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
