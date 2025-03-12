#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc and terminate with chosen
 * status value if it fails
 * @b: number of bytes that me allocated
 * Return: normal process termination with status value 98 if failure,
 * pointer to allocated memory if success
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
