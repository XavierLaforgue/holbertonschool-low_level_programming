#include <stdio.h>

/**
 * main - writes the alphabet in lowercase followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int letter;

	letter = 'a';
	while (letter <= 'z')
	{
	putchar(letter);
	++letter;
	}
	putchar('\n');

	return (0);
}
