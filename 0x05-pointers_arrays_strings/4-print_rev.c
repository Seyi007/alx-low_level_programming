#include "main.h"
/**
 *print_rev - prints a reverse string in stdio
 *@s: string variable
 *
 *Return: 0 always
 */

void print_rev(char *s)
{
	int i;

	for (s[i] = '\0'; i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
