#include "main.h"

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
	int array[5], another[1];

	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;
	print_array(array, 5);
	print_array(array, 3);
	another[0] = 10;
	print_array(another, 1);
	print_array(another, 0);
	print_array(another, -1);
	return (0);
}
