#include "main.h"
#include <stdlib.h>

/**
 * create_array - makes an array of variable size and initializes it with a
 * specific character
 * @size: size of the array to be generated
 * @c: character to initialize the array with
 * Return: pointer to generated array
 */

char *create_array(unsigned int size, char c)
{
	char *buf;
	unsigned int i;

	if (size == 0)
		return (NULL);

	buf = malloc(size * sizeof(char));
	if (buf == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		buf[i] = c;
	}

	return (buf);
}
