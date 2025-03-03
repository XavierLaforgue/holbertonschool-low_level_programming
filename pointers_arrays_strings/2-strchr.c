#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string where we will look for the character
 * @c: character to be searched on the given string
 * Return: pointer to first occurrence of c or NULL if character not foound
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; ++i)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return (NULL);

}
