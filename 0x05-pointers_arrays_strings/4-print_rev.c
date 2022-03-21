#include "main.h"
/**
 *print_rev - prints a reverse string in stdio
 *@s: string variable
 *
 *Return: 0 always
 */

void print_rev(char *s)
{
	int x = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		x++;
	}

	for (n = (x - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
