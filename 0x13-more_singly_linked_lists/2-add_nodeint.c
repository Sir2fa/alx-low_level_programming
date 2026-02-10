#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the begining of listint_t list'
 * @head: Pointer to the head of the node'
 * @n: New added node.
 *
 * Return: The address of the new element or NULL'
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newly;

	newly = (listint_t *) malloc(sizeof(listint_t));
		if (newly == NULL)
			return (NULL);

	newly->n = n;
	newly->next = *head;

	*head = newly;

	return (newly);

}
