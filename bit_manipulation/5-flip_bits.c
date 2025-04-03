#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: one number
 * @m: another number
 * Return: number of bits that need to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int p;
	int n_flips;

	n_flips = 0;
	p = n ^ m;
	while (p > 0)
	{
		n_flips = n_flips + (p & 1);
		p = p >> 1;
	}
	return (n_flips);
}
