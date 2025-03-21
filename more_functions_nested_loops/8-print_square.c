#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size of the square
 *
 * Return: nothing
 */

void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; ++i)
	{
		for (j = 1; j <= size; ++j)
			_putchar('#');
		if (i != size)
			_putchar('\n');
	}
	_putchar('\n');
}
