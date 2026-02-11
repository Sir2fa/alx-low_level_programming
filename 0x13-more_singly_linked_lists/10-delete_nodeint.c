#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node at indext in listint_t list.
 * @head: Head/start of node.
 * @index: Index of node that should be deleted, index start at 0.
 *
 * Return: 1 if it succeeded, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *new = *head;
	unsigned int del_idx;

	if (new == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(new);
		return (1);
	}

	for (del_idx = 0; del_idx < (index - 1); del_idx++)
	{
		if (new->next == NULL)
			return (-1);

		new = new->next;
	}

	temp = new->next;
	new->next = temp->next;
	free(temp);
	return (1);
}
