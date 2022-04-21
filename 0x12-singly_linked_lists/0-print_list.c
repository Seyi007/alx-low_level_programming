#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *print_list - prints all the elements in list_t to stdout
 *@h: pointer variable
 *
 *Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s \n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
