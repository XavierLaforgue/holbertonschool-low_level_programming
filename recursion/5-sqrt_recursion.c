#include "main.h"

/**
 * _sqrt - searches for the natural square root of a natural number
 * via recursive descending essays
 * @n: natural number whose natural square root will be calculated
 * @i: depth of the current attempt
 * Return: -1 if n is negative or if there is no natural square root; the
 * natural square root otherwise
 */

int _sqrt(int n, int i)
{
	if (n - i < 0)
		return (-1);
	else if ((n - i) * (n - i) == n)
		return (n - i);
	else
		return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: natural number whose natural square root will be calculated
 * Return: the natural square root of n, unless there is none, in which
 * case it will return -1
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
