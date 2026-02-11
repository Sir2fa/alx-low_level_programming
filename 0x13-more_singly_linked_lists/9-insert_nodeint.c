#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a new node at a given position.
 * @head: Head/start of node.
 * @idx: Index of the list where the new node is added.
 * @n: Number of added node.
 *
 * Return: The address of new node or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int inst;
	listint_t *new, *tmp;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		tmp = *head;
		for (inst = 0; inst < idx - 1; inst++)
		{
			tmp = tmp->next;
		}
		if (tmp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
