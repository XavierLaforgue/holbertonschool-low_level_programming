#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	float *ptr_float = &(d->age);

	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: %s\n", "(nil)");
		else
			printf("Name: %s\n", d->name);
		if (ptr_float == NULL)
			printf("Age: %s\n", "(nil)");
		else
			printf("Age: %1f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: %s\n", "(nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
