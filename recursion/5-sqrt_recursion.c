#include "main.h"

/**
 * _sqrt - find the sqrt
 * @n: number to find sqrt
 * @m: Current guess for sqrt
 * Return: int sqrt
 */

int _sqrt(int n, int m)
{
	if (m * m == n)
	{
		return (m);
	}
	if (m * m > n)
	{
		return (-1);
	}

	return (_sqrt(n, m + 1));
}

/**
 * _sqrt_recursion - returns natural square root
 * @n: number to check
 * Return: int sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt(n, 0));
}
