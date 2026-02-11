#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - The sum of all data.
 * @head: Head/start of node.
 *
 * Return: if list is empty (0).
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
