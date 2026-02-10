#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of listint_t list.
 * @head: head node data (n).
 *
 * Return: If empty return 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	int del;

	if (*head == NULL)
		return (0);

	new = *head;
	del = (*head)->n;
	*head = (*head)->next;

	free(new);

	return (del);
}
