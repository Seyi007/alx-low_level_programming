#include "main.h"
/**
 *_memcpy - copies n bytes from memory area src to dest
 *@dest: destination variable
 *@src: source variable
 *@n: number of variable to be copied
 *
 *Return: 0 always
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = *src;
	}
	return (dest);

}

