#include "main.h"
/**
 *print_rev - prints a reverse string in stdio
 *@s: string variable
 *
 *Return: 0 always
 */

void print_rev(char *s)
{
	int i = 0;

	for (i >= 0; s[i] = '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
