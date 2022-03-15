#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char word = 'a';

	while (word <= 'z')
	{
		_putchar(letter * 10);
		letter++;
	}
	_putchar('\n');
}
