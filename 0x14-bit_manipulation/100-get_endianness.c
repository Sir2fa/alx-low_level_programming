#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian or 1 if small endian
 */

int get_endianness(void)
{
	int num = 1;
	char *endian = (char *) &num;

	return (*endian);
}
