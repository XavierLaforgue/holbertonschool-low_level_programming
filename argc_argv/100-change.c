#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of
 * money
 * @argc: argument count, int variable that contains the number of arguments
 * that will be passed to the program
 * @argv: argument vector, char array of pointers that contains the arguments
 * passed to the program as strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int pieces25, pieces10, pieces5, pieces2, pieces1, pieces;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	pieces25 = atoi(argv[1]) / 25;
	pieces10 = (atoi(argv[1]) % 25) / 10;
	pieces5 = ((atoi(argv[1]) % 25) % 10) / 5;
	pieces2 = (((atoi(argv[1]) % 25) % 10) % 5) / 2;
	pieces1 = (((atoi(argv[1]) % 25) % 10) % 5) % 2;
	pieces = pieces25 + pieces10 + pieces5 + pieces2 + pieces1;
	printf("%d\n", pieces);

	return (0);
}
