#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter on each element of
 * an array
 * @array: array to be operated on
 * @size: size of the array given as input
 * @action: pointer to the function that will operate on each element of the
 * input array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; ++i)
	{
		action(array[i]);
	}
}
