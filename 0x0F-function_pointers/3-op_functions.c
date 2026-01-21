#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbners.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the substraction of two numbners.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The substration of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the multiplication of two numbners.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The multiplication of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two numbners.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The division of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the module of two numbners.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The module of a and b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
