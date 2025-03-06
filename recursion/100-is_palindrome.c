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
 * is_mirror - determines if the n'th character from the left and from the
 * right is equal to the other
 * @s: string whose characters will be compared
 * @s_size: size of the string
 * @n: position, from the left and from the right, starting from zero, of the
 * characters that will be compared
 * Return: 1 if equal, 0 otherwise
 */

int is_mirror(char *s, int s_size, int n)
{
	int ans;

	if ((s_size - 1 - (2 * n)) < 1)
		return (1);
	if (s[0 + n] == s[s_size - 1 - n])
	{
		ans = is_mirror(s, s_size, n + 1);
		return (ans);
	}
	return (0);
}

/**
 * is_palindrome - determines if a string is a palindrome
 * @s: string to be tested for a palindrome
 * Return: 1 if it is a palindrome or 0 if it isn't
 */

int is_palindrome(char *s)
{
	int s_size, ans;

	s_size = size(s, 0);
	ans = is_mirror(s, s_size, 0);

	return (ans);
}
