#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse, followed by a new line, using
 * only putchar
 *
 * Return: 0
 */

int main(void)
{
	int i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		--i;
	}
	putchar('\n');

	return (0);
}
