#include "main.h"
/**
 **_strncpy - copies string pointed to by number in src
 *plus '\0'
 *@dest: destination
 *@src: source
 *@n: variable
 *
 *Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[j] = src[j];

	}
	dest[j] = '\0';
	return (dest);
}

