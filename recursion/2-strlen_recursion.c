#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be measured
 * Return: integer, length of the string
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n = 1 + _strlen_recursion(s + 1);
	}
	return (n);
}
