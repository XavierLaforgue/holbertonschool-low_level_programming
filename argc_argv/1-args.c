#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector, array of pointers to strings
 * Return: 0
 */

int main(int argc __attribute__((unused)), char **argv)
{
	int i;

	for (i = 0; *(argv + i + 1) != NULL; ++i)
	{
	}
	printf("%d\n", i);

	return (0);
}
