#include "main.h"

/**
 * _pow_recursion - calculates the value of x raised to the power of y
 * @x: base, integer whose power will be calculated
 * @y: exponent, integer to which the base will be elevated
 * Return: for y a positive integer it returns the power of x to the y,
 * otherwise it returns -1
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else if (y == 0)
		return (1);
	else
		return (-1);
}
