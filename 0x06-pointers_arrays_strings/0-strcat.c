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
	char *start = *dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);

}
