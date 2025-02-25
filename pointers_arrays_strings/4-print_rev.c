#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to be reversed
 *
 * Return: Void
 */

void print_rev(char *s)
{
	int size, i;

	for (size = 0; *(s + size) != '\0'; size++)
	{
	}
	for (i = 0; i <= size; i++)
	{
		_putchar(*(s + size - i));
	}
	_putchar('\n');
}
