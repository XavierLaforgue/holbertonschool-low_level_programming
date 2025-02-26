#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int size, i;
	char tmp;

	for (size = 0; *(s + size) != 0; ++size)
	{
	}

	for (i = 0; i < size / 2; ++i)
	{
		tmp = *(s + size - 1 - i);
		s[size - 1 - i] = *(s + i);
		s[i] = tmp;
	}
}
