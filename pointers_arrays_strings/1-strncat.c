#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from the
 * string to concatenate to the original string
 * @dest: string that will have its null byte (\0) removed and to which
 * 'n' bytes of another string will be concatenated
 * @src: string to concatenate to the other one
 * @n: maximum number of bytes to use from the second string
 *
 * Return: the concated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int size_dest, size_src, i;

	for (size_dest = 0; dest[size_dest]; ++size_dest)
	{
	}
	for (size_src = 0; src[size_src]; ++size_src)
	{
	}
	for (i = 0; i < n && i <= size_src; ++i)
	{
		dest[i + size_dest] = src[i];
	}
	return (dest);
}
