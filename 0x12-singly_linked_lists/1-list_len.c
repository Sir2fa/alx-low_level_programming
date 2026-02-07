#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - check the length of element in list_t
 * @h: Name of list_t list
 * Return: Number of nodes.
 */
size_t list_len(const list_t *h)
{
	int counts = 0;

	while (h)
	{
		counts++;
		h = h->next;
	}
	return (counts);
}
