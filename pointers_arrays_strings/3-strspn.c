#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string from which the prefix will be measured
 * @accept: satring whose characters will be searched on the initial
 * segment of s
 * Return: number of bytes in the initial segment of s which consists only of
 * bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, i;

	for (n = 0; s[n] != '\0'; ++n)
	{
		i = 0;
		while (accept[i] != 0)
		{
			if (s[n] == accept[i])
			{
				break;
			}
			++i;
		}
		if (accept[i] == '\0')
			break;
	}
	return (n);
}
