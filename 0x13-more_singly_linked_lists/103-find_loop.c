#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head of node.
 *
 * Return: Address of the node where the loop starts or NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *birds, *rust;

	if (head == NULL || head->next == NULL)
		return (NULL);

	birds = head->next;
	rust = (head->next)->next;

	while (rust)
	{
		if (rust == birds)
		{
			birds = head;

			while (rust != birds)
			{
				birds = birds->next;
				rust = rust->next;
			}

			return (birds);
		}

		birds = birds->next;
		rust = (rust->next)->next;
	}

	return (NULL);
}
