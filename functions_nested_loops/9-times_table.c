#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Always 0
 */

void times_table(void)
{
	int i, j, p, first_dig, last_dig;

	for (i = 0; i <= 9; ++i)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= 9; ++j)
		{
			p = i * j;
			first_dig = p / 10;
			last_dig = p % 10;
			(first_dig == 0) ? _putchar(' ') :	_putchar('0' + first_dig);
			_putchar('0' + last_dig);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
