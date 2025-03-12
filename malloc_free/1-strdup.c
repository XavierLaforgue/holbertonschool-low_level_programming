#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy a given string and return a pointer to it
 * @str: input string that will be copied and for which a new memory space
 * will be allocated
 * Return: pointer to the string copy (newly allocated memory space)
 */

char *_strdup(char *str)
{
	unsigned int i, string_size;
	char *s;

	if (str == NULL)
		return (NULL);
	for (string_size = 0; str[string_size] != '\0'; ++string_size)
	{
	}
	s = malloc((string_size + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i <= string_size; ++i)
		s[i] = str[i];
	return (s);
}
