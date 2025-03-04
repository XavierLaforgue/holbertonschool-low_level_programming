#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, n_std;

	n = _strlen_recursion("Corbin Coleman");
	printf("Homemade strlen: %d\n", n);
	n_std = strlen("Corbin Coleman");
	printf("Standard strlen: %d\n", n_std);
	n = _strlen_recursion("");
	printf("Homemade strlen: %d\n", n);
	n_std = strlen("");
	printf("Standard strlen: %d\n", n_std);

	return (0);
}
