#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase, followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	char i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		++i;
	}
	i = 'a';
	while (i <= 'f')
	{
		putchar(i);
		++i;
	}
	putchar('\n');

	return (0);
}
