#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_node - adds a new node at the start of the lonked list
 *@head: pointer to pointer variable
 *@str: string to be duplicated
 *
 *Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int count = 0;

	while (str[count])
		count++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = count;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

