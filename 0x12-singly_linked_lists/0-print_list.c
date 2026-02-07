#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements
 * @h: The list_t list.
 * Return: The number of node in h.
 */

size_t print_list(const list_t *h)
{
	int counts = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		counts++;
		h = h->next;
	}

	return (counts);
}
