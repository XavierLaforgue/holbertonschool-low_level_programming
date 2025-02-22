#include <stdio.h>

/**
 * print_to_98 - prints the integer numbers from the input until 98, in order
 * @n: an integer
 *
 * Return: Nothing
 */

void print_to_98(int n)
{
	int d;

	d = 98 - n;
	while (d != 0)
	{
		printf("%d, ", 98 - d);
		(d > 0) ? --d : ++d;
	}
	printf("%d", 98);
	putchar('\n');
}
