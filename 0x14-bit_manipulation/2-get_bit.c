#include <stdio.h>
#include "main.h"
/**
 *get_bit - gets the value of a bit at a given index
 *@n: the to find from
 *@index: the index of bit value
 *
 *Return:bit at index or -1 if failed
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int number;

	if (index > 63)
		return (-1);

	number = (n >> index) & 1;

	return (number);
}


