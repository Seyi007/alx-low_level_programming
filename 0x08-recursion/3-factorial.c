#include "main.h"
/**
 *factorial - prints the factorial of a given number
 *@n: integer variable
 *
 *Return: 0 always
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}

