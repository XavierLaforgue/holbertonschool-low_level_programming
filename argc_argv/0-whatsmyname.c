#include <stdio.h>

/**
 * main - prints name of the program, followed by a new line
 * @argc: argument count
 * @argv: argument vector, array of pointers to the arguments passed to the
 * programm
 * Return: void
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
