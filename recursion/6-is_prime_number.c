#include "main.h"

/**
 * _is_prime_recursive - evaluates if number is prime recursively
 * @n: number to be evaluated
 * @i: divisor to be tested
 * Return: 1 if prime, 0 otherwise
 */

int _is_prime_recursive(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (_is_prime_recursive(n, i - 1));
}

/**
 * is_prime_number - returns 1 if input is a prime number, 0 otherwise
 * @n: number to be tested
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n > 1)
		return (_is_prime_recursive(n, n - 1));
	else
		return (0);
}
