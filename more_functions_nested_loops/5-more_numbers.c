#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new
 * line
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, n;

	for (n = 0; n < 10; ++n)
	{
		for (i = 0; i <= 14; ++i)
		{
			if (i >= 10)
				_putchar('1');
			_putchar('0' + i % 10);
		}
		_putchar('\n');
	}
}
