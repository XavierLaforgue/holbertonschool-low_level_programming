#include "main.h"
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
	char *found = haystack;

	while (found != NULL)
	{
		found = _strchr(found, needle[0]);
		j = 0;
		while (found[j] == needle[j] && needle[j] != '\0' && haystack[j] != 0)
		{
			++j;
		}
		if (needle[j] == 0)
			return (found);
	}
	return (NULL);
}
