#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase, followed by a new line
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; ++i)
	{
		char i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			++i;
		}
		_putchar('\n');
	}
}
