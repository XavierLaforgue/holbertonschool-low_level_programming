#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_strings(", ", 2, "Jay", "Django");
	print_strings(NULL, 3, "Mercredi", NULL, "Atol");
	print_strings(" | ", 4, "Mercredi", NULL, "Atol", "Hello");
	return (0);
}
