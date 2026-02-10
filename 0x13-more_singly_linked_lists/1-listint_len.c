#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Return the number of elements in a linked listint_t list.
 * @h: Pointer to head/start.
 *
 * Return: Number of elements in linked list.
 */
size_t listint_len(const listint_t *h)
{
	int link_print = 0;

	while (h != NULL)
	{
		link_print++;
		h = h->next;
	}

	return (link_print);
}
