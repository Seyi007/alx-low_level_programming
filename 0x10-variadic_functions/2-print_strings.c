#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - this function prints strings
 *@separator: string to separate string
 *@n: the number of string to be inputed
 *...: to show parameters will be include
 *
 *Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(args, char *);

		if (p == NULL)
			printf("nil");

		if(!separator)
			printf("%s", p);

		else if (separator && i == 0)
			printf("%s", p);

		else
			printf("%s%s", separator, p);
	}
	va_end(args);
	printf("\n");
}
