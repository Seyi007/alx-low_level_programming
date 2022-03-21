#include "main.h"
/**
 **_strcpy - copies string pointed to by src
 *plus '\0'
 *@dest: destination
 *@src: source
 *
 *Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *copy = dest;

	while (*src)
	{
		*dest++ = *src++;
		*dest = 0;
	}
	return (copy);
}
