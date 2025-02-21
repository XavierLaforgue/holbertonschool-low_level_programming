#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	unsigned int r;

	r = _abs(n);
	r = r%10;
	_putchar((char)r);

	return (r);
}
