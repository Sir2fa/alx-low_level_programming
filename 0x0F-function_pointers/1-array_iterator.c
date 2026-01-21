#include "function_pointers.h"

/**
 * array_iterator - a function given as a
 * parameter on each element of array.
 *
 * @array: array to execute function on
 * @size: the size of the array
 * @action: a pointer to function you need
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array && action)
	{
		x = 0;
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}
