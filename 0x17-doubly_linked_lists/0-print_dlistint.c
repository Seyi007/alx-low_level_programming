#include "lists.h"
/**
 *dlistint_len - counts the number of elements in a double linked list
 *@h: head pointer
 *
 *Return: the number pf elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
