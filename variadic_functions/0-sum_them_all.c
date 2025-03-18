#include "variadic_functions.h"

/**
 * sum_them_all - sums all its arguments
 * @n: number of unspecified arguments
 * Return: the result of the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list va;

	if (n == 0)
		return (0);
	va_start(va, n);
	while (i < n)
	{
		sum += va_arg(va, int);
		++i;
	}
	va_end(va);
	return (sum);
}
