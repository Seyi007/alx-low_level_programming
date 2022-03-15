#include <unistd.h>

/**
 * print_sign - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_sign(int n)
{
	int i = '+';
	int x = 0;
	int y = '-';

	if (n > 0)
	{
		putchar(i);
		return (1);
	}
	else if (n == 0)
	{
		putchar(x);
		return (0);
	}
	else
	{
		putchar(y);
		return (-1);
	}
}
