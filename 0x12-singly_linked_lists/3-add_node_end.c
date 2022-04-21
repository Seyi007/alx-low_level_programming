#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 *add_node_end - adds a new node to the end of a list
 *@head: pointer to the first variable
 *@str: string to be duplicated
 *
 *Return: the address of the new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int count = 0;
	list_t *new, *temp = *head;

	while (str[count])
		count++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = count;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);

}
