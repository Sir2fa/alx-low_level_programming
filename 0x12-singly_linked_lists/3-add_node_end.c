#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of the list_t list.
 * @head: The begining of the node.
 * @str: String to be added at the end of list_t list.
 * Return: The address of the new element or NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *duo;
	list_t *begin, *temp;
	int len = 0;
	begin = malloc(sizeof(list_t));
	if (begin == NULL)
		return (NULL);

	duo = strdup(str);
	if (str == NULL)
	{
		free(begin);
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	begin->str = duo;
	begin->len = len;
	begin->next = NULL;

	if (*head == NULL)
		*head = begin;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = begin;
	}

	return (*head);
}
