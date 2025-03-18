#include "3-calc.h"

/**
 * op_add - sums two integers a and b
 * @a: first integer
 * @b: second integer
 * Return: result of the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers b from a
 * @a: integer to subtract from
 * @b: integer to be subtracted from the first
 * Return: result of the subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: the result of the multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides an integer, a, over another, b
 * @a: dividend
 * @b: divisor
 * Return: the result of the division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the modulo (the remainder of the division of two
 * integers
 * @a: the dividend
 * @b: the divisor
 * Return: the remainder of the Euclidean (integer) division of a/b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
