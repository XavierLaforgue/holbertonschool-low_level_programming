#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_numbers - prints a quantity of numbers to specify a posteriori
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i;

	if (n > 0)
	{
		va_start(va, n);
		printf("%d", va_arg(va, int));
		if (separator == NULL)
		{
			for (i = 1; i < n; ++i)
			{
				printf("%d", va_arg(va, int));
			}
		}
		else
		{
			for (i = 1; i < n; ++i)
			{
				printf("%s%d", separator, va_arg(va, int));
			}
		}
	}
	printf("\n");
	va_end(va);
}
