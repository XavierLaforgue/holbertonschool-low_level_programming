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

/**
 * _strstr - locates a substring. Finds the first occurrence of the substring
 * needle in the string haystack. The null bytes are not compared
 * @haystack: string where the substring will be searched for
 * @needle: substring whose first occurrence will be searched on the string
 * Return: pointer to the beginning of the located substring, or NULL if the
 * substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int j;
	char *found;

	if (needle[0] != '\0')
		found = _strchr(haystack, needle[0]);
	else
		return (haystack);
	while (found != NULL)
	{
		j = 0;
		while (found[j] == needle[j] && needle[j] != '\0' && found[j] != '\0')
		{
			++j;
		}
		if (needle[j] == '\0')
			return (found);
		else if (found[j] == '\0')
			return (NULL);
		found = _strchr(found + j, needle[0]);
	}
	return (NULL);
}
