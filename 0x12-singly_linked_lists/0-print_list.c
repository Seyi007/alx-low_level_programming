#include "lists.h"
/**
 *print_list - prints all the elements in list_t to stdout
 *@h: pointer variable
 *
 *Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s \n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
