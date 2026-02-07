#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - Adds a new node at the begining of a list_t list.
 * @head: A pointer to head of list_t list.
 * @str: String added to the list_t list.
 * Return: Address of the new element or NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	char *duo_str;
	int len = 0;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);

	duo_str = strdup(str);
	if (duo_str == NULL)
	{
		free(add);
		return(NULL);
	}
	
	while (str[len] != '\0')
		len++;

	add->str = duo_str;
	add->len = len;
	add->next = *head;

	*head = add;

	return (add);
}
