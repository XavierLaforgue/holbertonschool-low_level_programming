#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number whose bit will be set to 0
 * @index: index of the bit that will be set to 0
 * Return: 1 if it worked, -1 if it didn't
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ones_0_idx = 1;

	ones_0_idx = ones_0_idx << index;
	if (index > 31)
		return (-1);
	*n = ~ones_0_idx & *n;
	return (1);
}
