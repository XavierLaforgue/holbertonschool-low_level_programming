#include <stdio.h>

/**
 * main -print all single digit numbers of base 10 starting from 0, followed by
 * a new line, using only putchar and not declaring any char variable
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(48 + i);
		++i;
	}
	putchar('\n');

	return (0);
}
