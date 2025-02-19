#include <stdio.h>

/**
 * main - print all possible combinations of single-digit numbers separated by
 * commas, in ascending order, and only with putchar
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar('0' +  i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	putchar('\n');

	return (0);
}
