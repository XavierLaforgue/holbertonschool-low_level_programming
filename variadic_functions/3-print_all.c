#include "variadic_functions.h"

/**
 * print_all - prints anything (characters, integers, floats, and strings)
 * @format: list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list va;
	char str_printf[3] = {'%', '\0', '\0'};
	unsigned int n = 0;
	int print_next;
	int printed = 0;
	char *str;

	va_start(va, format);
	while (format != NULL && format[n] != '\0')
	{
		print_next = (format[n] == 'c' || format[n] == 'i' ||
			format[n] == 'f' || format[n] == 's');
		if (n != 0 && print_next && printed)
			printf(", ");
		str_printf[1] = format[n];
		switch (format[n])
		{
			case 'c':
				printed = printf(str_printf, va_arg(va, int));
				break;
			case 'i':
				printed = printf(str_printf, va_arg(va, int));
				break;
			case 'f':
				printed = printf(str_printf, va_arg(va, double));
				break;
			case 's':
				str = va_arg(va, char *);
				if (str == NULL)
					str = "(nil)";
				printed = printf(str_printf, str);
				break;
		}
		++n;
	}
	printf("\n");
	va_end(va);
}
