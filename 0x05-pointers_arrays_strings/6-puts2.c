#include "main.h"
/**
 *puts2 - prints half the character of a string
 *@str: variable
 *
 *Return: 0 always
 */

void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		if ((n % 2) == 0)
			_putchar(str[n]);
		else
			continue;
	}
	_putchar('\n');
}
