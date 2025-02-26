#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: input string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int size, i;

	for (size = 0; str[size] != 0; ++size)
	{
	}
	for (i = 0; i < size / 2; ++i)
		_putchar(str[size / 2 + size % 2 + i]);
	_putchar('\n');
}
