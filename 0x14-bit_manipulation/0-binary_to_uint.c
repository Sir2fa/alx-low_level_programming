#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - Convert a binary number to an unsigned int.
 * @b: Pointing to the string of 0 and 1 chars.
 *
 * Return: The converted number or 0, if string is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int y = 0;

	if (b == NULL)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}

	for (x = 0; b[x] != '\0'; x++)
	{
		y <<= 1;
		if (b[x] == '1')
			y += 1;
	}
	return (y);
}
