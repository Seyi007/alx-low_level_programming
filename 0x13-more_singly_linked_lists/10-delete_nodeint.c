#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *delete_nodeint_at_index - deletes now at index of linked list
 *@head: pointer to the pointer to the head node
 *@index: number to which node is deleted
 *
 *Return: 1 (if it succeeds) and -1 (if it  fails)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *new = NULL, *temp = *head;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (n < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		n++;
	}

	new = temp->next;
	temp->next = new->next;
	free(new);

	return (1);
}

