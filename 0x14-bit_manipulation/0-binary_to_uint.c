#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: pointer to the string of 0 and 1
 *
 *Return: the converted number or 0 if b contains chars that is not 0 or 1
 *if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, len = 0, k = 1;
	int c;

	if (!b)
		return (0);

	len = strlen(b);

	for (c = len-1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);

		if(b[c] == '1')
		{
			i +=k;
		}
		k *= 2;
	}
	return (i);

}


