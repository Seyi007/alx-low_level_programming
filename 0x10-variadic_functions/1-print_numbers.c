#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - prints numbers separated by a string
 *@separator: pointer variable to string
 *@n: the number of parameers to be passes
 *
 *Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			return;
		}
		printf("%d", va_arg(args, int));
		printf("%s", separator);
	}
	va_end(args);
	printf("\n");

}

