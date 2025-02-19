#include <stdio.h>

/**
 * main -
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
