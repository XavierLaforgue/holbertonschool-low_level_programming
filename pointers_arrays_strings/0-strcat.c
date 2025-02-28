#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string that will have its null byte (\0) removed and to which
 * another string will be concatenated
 * @src: string to concatenate to the other one
 * Return: pointer to resulting string (same as pointer to dest)
 */

char *_strcat(char *dest, char *src)
{
	int size_dest, size_src, i;

	for (size_dest = 0; dest[size_dest] != '\0'; ++size_dest)
	{
	}
	for (size_src = 0; src[size_src] != 0; ++size_src)
	{
	}
	for (i = 0; i <= size_src; ++i)
	{
		dest[i + size_dest] = src[i];
	}
	return (dest);
}
