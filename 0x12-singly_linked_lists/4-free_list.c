#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees the list_t list.
 * @head: The begining of node.
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *end;

	while (head)
	{
		end = head->next;
		free(head->str);
		free(head);
		head = end;
	}
}
