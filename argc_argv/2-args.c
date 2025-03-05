#include <stdio.h>

/**
 * main - printsa all the arguments it receives
 * @argc: argument count
 * @argv: argument vector, stores the arguments given to the program, pointer
 * array
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; argv[i] != NULL; ++i)
		printf("%s\n", argv[i]);

	return (0);
}
