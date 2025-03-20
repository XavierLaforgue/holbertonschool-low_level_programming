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
	char *str;
	int allowed_format;

	va_start(va, format);
	while (format[n] != '\0')
	{
		allowed_format = format[n] == 'c' || format[n] == 's' ||
							format[n] == 'i' || format[n] == 'f';
		if (n != 0 && allowed_format)
			printf(", ");
		str_printf[1] = format[n];
		switch (format[n])
		{
			case 'c':
				printf(str_printf, va_arg(va, int));
				break;
			case 'i':
				printf(str_printf, va_arg(va, int));
				break;
			case 'f':
				printf(str_printf, va_arg(va, double));
				break;
			case 's':
				str = va_arg(va, char *);
				if (str == NULL)
					str = "(nil)";
				printf(str_printf, str);
				break;
		}
		++n;
	}
	va_end(va);
	printf("\n");
}
