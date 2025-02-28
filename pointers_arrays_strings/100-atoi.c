#include "main.h"

/**
 * _atoi - converts a string into an integer
 * @s: input string
 *
 * Return: integer from string
 */

int _atoi(char *s)
{
	int size, i_f, i_l, i, num, pow, sign;

	for (size = 0; s[size] != 0; ++size)
	{
	}

	i_f = 0;
	while ((s[i_f] < '0' || s[i_f] > '9') && i_f < size)
	{
		++i_f;
	}

	i_l = i_f;
	while (s[i_l + 1] >= '0' && s[i_l + 1] <= '9' && i_l < size)
	{
		++i_l;
	}

	sign = 1;
	for (i = 0; i <= i_f; ++i)
	{
		if (s[i] == '-')
			sign = -sign;
	}

	pow = 1;
	num = 0;
	for (i = i_l; i >= i_f && i != size; --i)
	{
		if (i < i_l)
			pow = pow * 10;
		num += sign * pow * (s[i] - '0');
	}
	return (num);
}
