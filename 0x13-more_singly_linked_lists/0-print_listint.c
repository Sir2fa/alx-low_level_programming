#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all element of the listint_t list'
 * @h: Head/stasrt of the linking.
 *
 *Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t numb_node = 0;

	while (h != NULL)
	{
		numb_node++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (numb_node);
}
