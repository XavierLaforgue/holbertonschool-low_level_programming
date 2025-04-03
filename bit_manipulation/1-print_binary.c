#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary representation
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else if (n == 1)
		_putchar('1');
	else
	{
		print_binary(n >> 1);
		print_binary(n & 1);
	}
}
