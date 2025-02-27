#include "main.h"

/**
 * _strcpy - copies a string, including the terminating nul byte (\0), to
 * a buffer
 * @dest: pointer to the buffer where we want to copy the string
 * @src: pointer to the string we want to copy
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int size, i;

	for (size = 0; src[size] != 0; ++size)
	{
	}
	for (i = 0; i <= size; ++i)
	{
/*		dest[i] = src[i];*/
		*(dest + i) = *(src + i);
	}
	return (dest);
}
