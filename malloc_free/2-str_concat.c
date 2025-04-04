#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string to which the following string will be concatenated
 * @s2: string to concatenate to the previous
 * Return: pointer to the newly allocated space in meory with the contents
 * of s1 followed by the contents of s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int s1_size, s2_size, i;

	if (s1 != NULL)
	{
		for (s1_size = 0; s1[s1_size] != '\0'; ++s1_size)
		{
		}
	}
	else
		s1_size = 0;
	if (s2 != NULL)
	{
		for (s2_size = 0; s2[s2_size] != '\0'; ++s2_size)
		{
		}
	}
	else
		s2_size = 0;
	s = malloc((s1_size + s2_size + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < s1_size; ++i)
		s[i] = s1[i];
	for (i = s1_size; i < s1_size + s2_size; ++i)
		s[i] = s2[i - s1_size];
	s[s1_size + s2_size] = '\0';

	return (s);
}
