#include "main.h"

/**
 * size - determines the size of a string
 * @s: input string to be measured
 * @i: size guess
 * Return: the size of the string
 */

int size(char *s, int i)
{
	int s_size;

	if (*(s + i) != '\0')
	{
		s_size = size(s, i + 1);
		return (s_size);
	}
	return (i);
}

/**
 * superflous - remove unnecessary asterisks
 * @s: string that may contain asterisks
 * Return: the string with as many or less asterisks than the original string
 */

char * superflous(char *s, int s_size, int i, char *s_min)
{
	int i;

	if (s[i] == '*' && s[i + 1] != '*' && i < s_size - 1)
	{
		superflous(s + 1, 
}

/**
 * wildcmp - compares two strings and determines if they can be cosidered
 * to be identical, while accepting the usage of the wildcare * which can
 * replace any string (including an empty string)
 * @s1: string to which a string will be compared
 * @s2: string that may contain wildcards and will be compared with the other
 * string to determine if they can be considered identical
 * Return: 1 if they can be considered identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	s2_size = size(s2, 0);
	if (*s1 == *s2)
		wildcmp(s1, s2 + 1);
	if (*s1 != *s2 & *s2 != '*'
	
}
