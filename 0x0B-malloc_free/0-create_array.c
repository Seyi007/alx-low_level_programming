#include <stdlib.h>
#include "main.h"
/**
 *create_array - creates an array of chars, initialize a specific char
 *@size: size of the array
 *@c: char to be initialized with
 *
 *Return: 0 always
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	if (ptr == NULL)
		return (NULL);
	*(ptr + i) = '\0';

	return (ptr);
}


