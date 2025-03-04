#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matric of
 * integers
 * @a: square matrix
 * @size: size of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum_diag, sum_anti_diag;

	sum_diag = 0;
	sum_anti_diag = 0;
	for (i = 0; i < size; ++i)
	{
		sum_diag = *(a + i * (size + 1)) + sum_diag;
		sum_anti_diag = *(a + (i + 1) * (size - 1)) + sum_anti_diag;
	}
	printf("%d, %d\n", sum_diag, sum_anti_diag);
}
