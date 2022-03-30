#include "main.h"
/**
 *_print_rev_recursion - Prints reverse of a string
 *using recursions
 *@s: pointer string variable
 *
 *Return: 0 always
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
