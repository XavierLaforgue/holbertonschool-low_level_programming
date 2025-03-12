#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc, and sets it to
 * zero
 * @nmemb: number of elements the allocated array needs to fit in
 * @size: number of bytes required by each element of the array
 * Return: NULL if malloc fails or if nmemb or size are 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ar = malloc(nmemb * size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; ++i)
		ar[i] = 0;

	return (ar);
}
