#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: character array containing the name to be printed
 * @f: function to use for the printing
 * Return: void
 */

void print_name(char *name, void(*f)(char *))
{
	(*f)(name);
}
