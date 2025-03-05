#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument counter
 * @argv: argument vector, array of pointers to the given arguments, which, in
 * this case, should be positive integers
 * Return: 0
 */

int main(int argc __attribute__((unused)), char **argv)
{
	int i, j, sum;

	i = 1;
	sum = 0;
	while (argv[i] != NULL)
	{
		for (j = 0; argv[i][j] != '\0'; ++j)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
		++i;
	}
	printf("%d\n", sum);

	return (0);
}
