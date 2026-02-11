#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *
 * _rallo - allocate new memory to array of pointers.
 * @list: The former list to add.
 * @size: Size of current list.
 * @new: New node to append to the list.
 *
 * Return: Pointer to new list.
 */
const listint_t **_rallo(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **append;
	size_t x;

	append = malloc(size * sizeof(listint_t *));
	if (append == NULL)
	{
		free(list);
		exit(98);
	}
	for (x = 0; x < size - 1; x++)
	append[x] = list[x];
	append[x] = new;
	free(list);
	return (append);
}

/**
 * free_listint_safe - frees lists with a loop.
 * @h: Pointer to head of node.
 *
 * Return: Size of the list freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	const listint_t **list = NULL;
	size_t links, idx = 0;
	if (h == NULL || *h == NULL)
			return (idx);
	while (*h != NULL)
	{
		for (links = 0; links < idx; links++)
		{
			if (*h == list[links])
			{
				*h = NULL;
				free(list);
				return (idx);
			}
		}
		idx++;
		list = _rallo(list, idx, *h);
		temp = (*h)->next;
		free(*h);
		*h = temp;
	}
	free(list);
	return (idx);
}
