#include "main.h"
/**
 *_puts - prints a string in stdio
 *@str: string variable
 *
 *Return: 0 always
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
