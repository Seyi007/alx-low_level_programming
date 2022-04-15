#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - prints numbers separated by a string
 *...: parameter to be inserted
 *@separator: pointer variable to string
 *@n: the number of parameers to be passes
 *
 *Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;
	va_list args;

	if (separator == NULL || *separator == 0)
		p = "";
	else
		p = (char *) separator;

	va_start(args, n);

	if (n > 0)
		printf("%d", va_arg(args, int));

	for (i = 1; i < n; i++)
	{
		printf("%s%d", p, va_arg(args, int));
	}
	va_end(args);
	printf("\n");

}

