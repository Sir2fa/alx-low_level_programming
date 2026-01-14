#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of int
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array, if failed return NULL
 */
int *array_range(int min, int max)
{
	int *ptr, b;

	if (min > max)
		return (NULL);
	ptr = malloc(((max - min) + 1) * sizeof(int));
	if (!ptr)
		return (NULL);
	for (b = 0; (min + b) <= max; b++)
		ptr[b] = (min + b);
	return (ptr);
}
