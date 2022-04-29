#include <stdio.h>
#include "main.h"
/**
 *flip_bits - flips bits to get from one number to another
 *@n: the number of first bit
 *@m: the number of second bit
 *
 *Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, len = 0;
	unsigned long int present;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		present = exclusive >> i;
		if (present & 1)
			len++;
	}

	return (len);
}

