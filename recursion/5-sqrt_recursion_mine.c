#include "main.h"

/**
 * _sqrt - searches for the natural square root of a natural number
 * via recursive ascending essays
 * @n: natural number whose natural square root will be calculated
 * @m: identifier of the current attempt
 * Return: -1 if n is negative or if there is no natural square root; the
 * natural square root otherwise
 */

int _sqrt(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);

	return (_sqrt(n, m + 1));
}

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: natural number whose natural square root will be calculated
 * Return: the natural square root of n, unless there is none, in which
 * case it will return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(n, 0));
}
