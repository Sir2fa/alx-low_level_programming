#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number of bit.
 * @index: Index starting from 0 of bit to set.
 *
 * Return: 1 or -1 if error occurs.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
