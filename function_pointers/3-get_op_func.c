#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - selects the correct function to perform the operation
 * requested by the user
 * @s: character representing the desired operation
 * Return: pointer to a function that performs the operation stated in "s"
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
/*
 * s[0] == ops[i].op[0] && s[1] == '\0')
 */
			return (ops[i].f);
		}
		++i;
	}
	return (NULL);
}
