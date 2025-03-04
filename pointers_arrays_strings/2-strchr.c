#include "main.h"
#ifndef NULL
	#define NULL ((void *)0)
#endif

/**
 * _strchr - locates a character in a string
 * @s: string where we will look for the character
 * @c: character to be searched on the given string
 * Return: pointer to first occurrence of c or NULL if character not foound
 */

char *_strchr(char *s, char c)
{
	int i, size;

	for (size = 0; s[size] != '\0'; ++size)
	{
	}
	for (i = 0; i <= size; ++i)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return (NULL);
}
