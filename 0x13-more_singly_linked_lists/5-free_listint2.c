#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees listint_t list.
 * @head: Head/start of listint_t list.
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
		return;
	while (*head)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
	}
	head = NULL;
}
