#include "main.h"
/**
 *_strcat - appends source string to destination string
 *@dest: pointer destination variable
 *@src: pointer source variable
 *
 *Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		dest++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		dest++;
		src++;
	}
	dest = '\0';
	return (dest);

}
