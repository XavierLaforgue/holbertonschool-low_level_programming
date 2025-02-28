#include "main.h"

/**
 * _strcmp - compares two strings exactly like strcmp: calculates the
 * numeric difference between the first different characters in the strings
 * @s1: first string
 * @s2: second string
 *
 * Return: integer. 0 if equal strings, positive if s1 first different
 * character is larger than s2's first different character,
 * negative otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && s1[i]; ++i)
	{
	}
	return (s1[i] - s2[i]);
}
