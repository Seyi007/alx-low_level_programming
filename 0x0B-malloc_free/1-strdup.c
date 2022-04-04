#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_strdup - returns a pointer to the copy of a string
 *memory for the new string is obtained with malloc and freed with free
 *@str: pointer variabe to str
 *
 *Return: NULL if str is empty
 */

char *_strdup(char *str)
{
	unsigned int j, i = 0, len;
	char *prt;

	if (str == NULL)
		return (NULL);


	for (j = 0; str[j] != '\0'; j++)
	{
		len++;
	}

	 prt = malloc(sizeof(char) * (len + 1));

	if (prt == NULL)
		return (NULL);

	while ((prt[i] = str[i]) != '\0')
		i++;
	return (prt);
	free(prt);

}
