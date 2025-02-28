#include "main.h"

/**
 * _strcmp - compares two strings excalty like strcmp
 * @s1: first string
 * @s2: second string
 *
 * Return: integer. 0 if equal strings, positive if s1 larger than s2,
 * negative if s1 shorter than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && s1[i]; ++i)
	{
	}
	return (s1[i] - s2[i]);
}
