#include "main.h"
/**
 *_puts_recursion - prints a string, then new line
 *@s: string variable
 *
 *Return: 0 always
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		 return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
