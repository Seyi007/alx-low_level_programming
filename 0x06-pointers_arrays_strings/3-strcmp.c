#include "main.h"
/**
 *_strcmp - compares two string
 *@s1: variable
 *@s2: variable
 *
 *Return: 0 always
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 != '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2)
}
