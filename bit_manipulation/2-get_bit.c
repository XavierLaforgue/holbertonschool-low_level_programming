#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer where the specific bit will be looked for
 * @index: index, starting from 0, of the desired bit
 * Return: value of the bit at index or -1 in case of error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 31) /* long int contains 4 bytes = 4*8 bits = 32 bits */
		return (-1);
	return ((n >> index) & 1);
}
