#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - the value of a given function.
 * @n: Number to be printed.
 * @index: index starting from 0 of bit.
 *
 * Return: The value of the bit at index or -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	
	if (index > (sizeof(unsigned long int) *8 - 1))
		return (-1);

	if ((n & (1 << index))  == 0)
		return (0);
	
	return (1);
}
