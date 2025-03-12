#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: structure to initialize
 * @name: value to initialize the name field of the structure
 * @age: value to initialzie the age field of the structure
 * @owner: value to initialize the owner field of the structure
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
