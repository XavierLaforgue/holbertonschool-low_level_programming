#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;

	str = "0123456789";
	puts_half(str);
	str = "Holberton!";
	puts_half(str);
	str = "";
	puts_half(str);
	return (0);
}
