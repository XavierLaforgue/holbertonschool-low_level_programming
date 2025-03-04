#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: number for which to calculate the factorial
 * Return: if n is a positive integer then it returns the factorial of n; if n
 * is negative it returns -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
