#include "main.h"
/**
 *_strlen - prints the lenght of a string
 *@s: variable name for string
 *
 *Return: 0 always
 */

int _strlen(char *s)
{
	int i = 1, len = 0;
	char al = s[0];

	while (al != '\0')
	{
		len++;
		al = s[i++];
	}
	return (len);
}
