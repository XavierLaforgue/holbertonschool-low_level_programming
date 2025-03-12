#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: base string to which which the other string will be concatenated
 * @s2: string to concatenate
 * @n: number of bytes of the second string that will be concatenated to the
 * base string
 * Return: the resulting concatenated string if success, NULL if failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int size_s1, size_s2, i;

	if (s1 == NULL)
		s1 = "";
	for (size_s1 = 0; s1[size_s1] != '\0'; ++size_s1)
	{
	}
	if (s2 == NULL)
		s2 = "";
	for (size_s2 = 0; s2[size_s2] != '\0'; ++size_s2)
	{
	}
	if (size_s2 < n)
		n = size_s2;
	str = malloc(size_s1 + n + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size_s1; ++i)
		str[i] = s1[i];
	for (i = size_s1; i < size_s1 + n; ++i)
		str[i] = s2[i - size_s1];
	str[size_s1 + n] = '\0';

	return (str);
}
