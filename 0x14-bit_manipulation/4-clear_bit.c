#include <stdio.h>
#include "main.h"
/**
 *clear_bit - set the vale of bit to 0 at any given index
 *@n: the string of bit 0 and 1
 *@index: index of bit to be replaced
 *
 *Return: 1 if it works and -1 it otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);

}
