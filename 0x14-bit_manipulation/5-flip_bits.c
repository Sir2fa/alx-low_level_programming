#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - number of bits to flip from one number to another.
 * @n: first number to flip.
 * @m: second number to flip.
 *
 * Return: Number of bits flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differ = n ^ m, score = 1;
	unsigned int x, y = 0;

	for (x = 0; x < (sizeof(unsigned long int) * 8); x++)
	{
		if (score == (differ & score))
			y++;
		score <<= 1;
	}

	return (y);
}
