#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *free_listint - frees the list
 *@head: pointer to the first node
 *
 *Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *new;

	while(!head)
		return;

	while (head)
	{
		new = head->next;
		free(head);
		head = new;
	}

}
