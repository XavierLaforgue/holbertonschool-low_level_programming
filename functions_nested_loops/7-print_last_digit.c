#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int r;
	r = _abs(n%10);
	_putchar(r);

	return (r);
}
