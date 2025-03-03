#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @s: pointer to the memory area where the constant byte will be written
 * @b: the constant byte we will fil the memory with
 * @n: number of bytes of the memory, starting at position s, that will be
 * filled
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		*(s + i) = b;
	}
	return (s);
}
