#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *array_iterator - executes a function given as a parameter
 *on each element of an array
 *@array: array to be iterated
 *@size: size of array
 *@action: pointer to the needed funtion
 *
 *Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}



