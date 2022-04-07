#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
 *malloc_checked - Allocates memory using malloc
 *@b: byte to be allocated
 *
 *Return: pointer to the allocated area, 98 if fails
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}

