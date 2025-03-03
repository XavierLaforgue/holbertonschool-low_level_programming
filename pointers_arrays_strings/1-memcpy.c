#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area where the bytes will be copied to
 * @src: memory area from where the bytes will be copied
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		dest[i] = src[i];
	}
	return (dest);
}
