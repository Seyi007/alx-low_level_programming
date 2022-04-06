#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *argstostr - concatenates all arguments of a program
 *@ac: arguments count
 *@av: array of arguments
 *
 *Return: 0 always
 */

char *argstostr(int ac, char **av)
{
	int i, j, n, count;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++;
		}
		count++;
	}

	s = malloc(sizeof(char) * (count + 1));
	if (s == NULL)
		return (NULL);

	n = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[n] = av[i][j];
			n++;
		}
		s[n] = '\n';
		n++;
	}
	return (s);
}
