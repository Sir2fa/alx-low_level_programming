#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *
 * _allo - allocate new memory to array of pointers.
 * @list: The former list to add.
 * @size: Size of current list.
 * @new: New node to append to the list.
 *
 * Return: Pointer to new list.
 */
const listint_t **_allo(const listint_t **list, size_t size, const listint_t *new)
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
 *  print_listint_safe - prints listint_t linked list.
 *  @head: Pointer to the head of node.
 *  
 *  Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t linked, idx = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for(linked = 0; linked < idx; linked++)
		{
			if (head == list[linked])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (idx);
			}
		}
		idx++;
		list = _allo(list, idx, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (idx);
}
