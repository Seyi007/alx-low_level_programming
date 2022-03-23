#include "main.h"
/**
 *_strncat - appends source string to destination string with number
 *@dest: pointer destination variable
 *@src: pointer source variable
 *@n: variable
 *
 *Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];

	}
	dest[i + j] = '\0';
	return (dest);
}
