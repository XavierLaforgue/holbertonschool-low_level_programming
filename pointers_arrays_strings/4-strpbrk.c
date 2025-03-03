#include "main.h"

/**
 * _strpbrk - searcher a string for any of a set of bytes
 * @s: string to be searched for a certain matching byte (character)
 * @accept: byte to search in the string s
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != 0; ++i)
	{
		for (j = 0; accept[j]; ++j)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return ((void *)0);
}
