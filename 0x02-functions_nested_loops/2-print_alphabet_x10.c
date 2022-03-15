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
		_putchar(word * 10);
		word++;
	}
	_putchar('\n');
}
