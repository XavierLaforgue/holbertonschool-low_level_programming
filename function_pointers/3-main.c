#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations on two integers, namely: addition,
 * subtraction, multiplication, division, and modulo
 * @argc: argument counter, it will contain the number of arguments the
 * function will receive; it will be equal to 3
 * @argv: argument vector, it will contain all the arguments passed to the
 * function in "string" type
 * Return: 0 in case of success and the result of the operation has been
 * printed followed by a new line, 98 if wrong number of arguments, 99 if the
 * operator is not included in the list of available ones, or 100 if there is
 * division by 0
 */

int main(int argc, char *argv[])
{
	int (*op_ptr)(int, int);
	int num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op_ptr = get_op_func(argv[2]);
	if (op_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num2 = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op_ptr(atoi(argv[1]), num2));
	return (0);
}
