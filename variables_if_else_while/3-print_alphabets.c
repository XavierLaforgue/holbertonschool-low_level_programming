#include <stdio.h>

/**
 * main - print the alphabet in lowercase, and then uppercase, followed by
 * a new line
 *
 * Return: 0
 */

int main(void)
{
	char low_case, up_case;

	low_case = 'a';
	while (low_case <= 'z')
	{
		putchar(low_case);
		++low_case;
	}
	up_case = 'A';
	while (up_case <= 'Z')
	{
		putchar(up_case);
		++up_case;
	}
	putchar('\n');

	return (0);
}
