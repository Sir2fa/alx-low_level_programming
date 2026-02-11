#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to the head of node.
 *
 * Return: Pointer to first node of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before, *after;

	if (*head == NULL)
		return (NULL);
	if (head == NULL)
		return (*head);
	after = NULL;

	while ((*head)->next != NULL)
	{
		before = ((*head)->next);
		(*head)->next = after;
		after = *head;
		*head = before;
	}

	(*head)->next = after;

	return (*head);
}
