#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to string of binary chars
 * Return: converted number, or 0 if not binary or if NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n, i, tmp;

	if (b == NULL)
		return (0);
	i = 0;
	n = 0;
	while (b[i] != '\0')
	{
		if (b[i] == '0')
			tmp = 0;
		else if (b[i] == '1')
			tmp = 1;
		else
			return (0);
		n = 2 * n + tmp;
		++i;
	}

	return (n);
}
