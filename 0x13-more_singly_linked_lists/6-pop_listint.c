#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *pop_listint - removes the head node in the linked list
 *@head: pointer to the pointer of the first node
 *
 *Return: 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	new = (*head)->next;
	free(*head);
	*head = new;

	return (data);

}
