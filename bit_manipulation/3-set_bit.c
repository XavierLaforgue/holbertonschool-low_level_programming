#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number for which a bit will be set to 1
 * @index: index of the bit to be set to 1
 * Return: 1 in case of success, -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pow_2_idx;
	unsigned int i;

	if (index > 31)
		return (-1);
	pow_2_idx = 1;
	for (i = 0; i < index; ++i)
		pow_2_idx = 2 * pow_2_idx;
	*n = *n | pow_2_idx;
	return (1);
}
