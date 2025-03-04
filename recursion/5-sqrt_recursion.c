#include "main.h"

/**
 * _sqrt_compute - find the sqrt
 * @n: number to find sqrt
 * @g: Current guess for sqrt
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

	return (_sqrt(n, 1));
}
