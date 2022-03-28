#include "main.h"
/**
 *_memset - fills the memory area with a constant
 *@s: pointer s
 *@b: variable to fill with
 *@n: memory n bytes
 *
 *Return: 0 always
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
