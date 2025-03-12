#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers in ascending order
 * @min: minimum value that will be contained in the array
 * @max: maximum value that will be contained in the array
 * Return: pointer to the created array, NULL if min > max or if malloc
 * fails
 */

int *array_range(int min, int max)
{
	int i;
	int *ar;

	if (min > max)
		return (NULL);
	ar = malloc((max - min + 1) * sizeof(int));
	if (ar == NULL)
		return (NULL);
	i = min;
	while (i <= max)
	{
		ar[i - min] = i;
		++i;
	}
	return (ar);
}
