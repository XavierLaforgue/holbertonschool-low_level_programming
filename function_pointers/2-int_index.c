#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array where the integer will be searched for
 * @size: number of elements in the array to be searched
 * @cmp: pointer to the function to be used to compare values
 * Return: returns the index of the first element for which the cmp
 * function does not return 0. Returns -1 if no element matches and if size <=
 * 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, is_it;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; ++i)
	{
		is_it = cmp(array[i]);
		if (is_it)
			return (i);
	}
	return (-1);
}
