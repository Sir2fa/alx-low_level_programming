#include "function_pointers.h"

/**
 * int_index - function used to search for an integer.
 * @array: array to a pointer 
 * @size: number of element in an array
 * @cmp: pointer to function used to compare.
 *
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int y = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (y < size)
			{
			if (cmp(array[y]))
				return (y);
			y++;
			}
		}
	}
	return (-1);
}
