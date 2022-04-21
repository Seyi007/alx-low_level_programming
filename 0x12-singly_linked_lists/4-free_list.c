#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *free_list - frees a list
 *@head: pointer to list
 *
 *Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (!head)
                return;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}

}

