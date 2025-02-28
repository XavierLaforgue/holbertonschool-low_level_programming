#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string whose loercase letters will be changed for uppercase letters
 *
 * Return: changed string
 */


char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] + 'A' - 'a';
	}
	return (str);
}
