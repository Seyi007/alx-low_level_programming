#include <stdio.h>
#include "main.h"
/**
 *set_bit - sets the value of bit to 1 at any given index
 *@n: the string of bit 0 and 1
 *@index: index of value to change
 *
 *Return: 1 if it worked, -1 if otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n)
		return (-1);

	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);

}
