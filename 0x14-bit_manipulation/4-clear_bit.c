#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - sets the value of bit to 0 at index.
 * @n: Pointer to the number of bit.
 * @index: index starting from 0.
 *
 * Return: 1 or -1 if error occurs.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
