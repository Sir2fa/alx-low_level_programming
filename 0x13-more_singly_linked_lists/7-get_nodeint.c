#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of listint_t list.
 * @head: Head/start of node.
 * @index: Index of node, starting at 0.
 *
 * Return: NULL if node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int calc = 0;
	listint_t *postn = head;

	while (postn != NULL)
	{
		if (calc == index)
		{
			return (postn);
		}
		postn = postn->next;
		calc++;
	}

	return (NULL);
}
