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
	unsigned int present;
	unsigned int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		present = exclusive >> i;
		if (present & 1)
			len++;
	}

	return (len);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = flip_bits(1024, 1);
    printf("%u\n", n);
    n = flip_bits(402, 98);
    printf("%u\n", n);
    n = flip_bits(1024, 3);
    printf("%u\n", n);
    n = flip_bits(1024, 1025);
    printf("%u\n", n);
    return (0);
}
