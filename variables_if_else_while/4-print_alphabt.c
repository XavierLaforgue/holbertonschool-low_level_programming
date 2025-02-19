#include <stdio.h>

/**
 * main - print the alphabet in lowercase, followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	char low_case;

	low_case = 'a';
	while (low_case <= 'z')
	{
		if ((low_case != 'e') && (low_case != 'q'))
		{
			putchar(low_case);
		}
		++low_case;
	}
	putchar('\n');

	return (0);
}
