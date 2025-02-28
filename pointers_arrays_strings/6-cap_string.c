#include "main.h"
/**
 * _islower - determines if character is a lowercase letter of the alphabet
 * @c: character to be tested
 * Return: 0 if false, 1 if true
 */
int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
/**
 * _issep - determines if the character is a word separator
 * @c: the character to be tested
 * Return: 0 if false, 1 if true
 */
int _issep(char c)
{
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(',
')', '{', '}'};
	int i;

	for (i = 0; i <= 13; ++i)
	{
		if (c == sep[i])
			return (1);
	}
	return (0);
}
/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitalized
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int i;

	if (_islower(str[0]))
		str[0] = str[0] + 'A' - 'a';
	for (i = 1; str[i]; ++i)
	{
		if (_issep(str[i - 1]) && _islower(str[i]))
			str[i] = str[i] + 'A' - 'a';
	}
	return (str);
}
