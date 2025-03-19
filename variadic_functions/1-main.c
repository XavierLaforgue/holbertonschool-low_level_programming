#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	void *so_null = 0;

	print_numbers(", ", 4, 0, 98, -1024, 402);
	print_numbers(so_null, 3, 10, 20, 309);
	return (0);
}
