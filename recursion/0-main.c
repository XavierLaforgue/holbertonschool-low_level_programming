#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	puts("Puts from standard library:");
	puts("");
	puts("c");
	puts("\n");
	_puts_recursion("Puts with recursion:");
	_puts_recursion("");
	_puts_recursion("c");
	_puts_recursion("\n");
	return (0);
}
