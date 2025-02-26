#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * character, followed by a new line
 * @str: input string (character array/pointer)
 *
 * Return: void
 */

void puts2(char *str)
{
	int i, size;

	for (size = 0; str[size] != 0; ++size)
	{
	}
	for (i = 0; i < size; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
