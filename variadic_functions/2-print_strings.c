#include "variadic_functions.h"

/**
 * print_strings - prints an unspecified number of strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list va;
	char *s;
	unsigned int i;

	if (n > 0)
	{
		va_start(va, n);
		for (i = 0; i < n; ++i)
		{
			if (separator != NULL && i != 0)
				printf("%s", separator);
			s = va_arg(va, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
		}
		va_end(va);
	}
	printf("\n");
}
