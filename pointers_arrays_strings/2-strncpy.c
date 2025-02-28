#include "main.h"

/**
 * _strncpy - copies a string (exactly like strncpy)
 * @dest: string on which n bytes of the second string will be copied
 * overwriting thos positoons on the original stings
 * @src: string to copy to the first one
 * @n: number of bytes to copy from the second string and overwrite on the
 * first
 *
 * Return: pointer to resulting string (same as pointer to dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}
