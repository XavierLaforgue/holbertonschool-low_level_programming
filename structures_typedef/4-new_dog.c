#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: the new dog as a dog_t struct type, or NULL if the function
 * fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	float *float_ptr = &age;
	unsigned int i;

	if (name == NULL || float_ptr == NULL || owner == NULL)
		return (NULL);
	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);
	n_dog->name = malloc(sizeof(name));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; ++i)
		n_dog->name[i] = name[i];
	n_dog->name[i] = '\0';
	n_dog->age = age;
	n_dog->owner = malloc(sizeof(owner));
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; ++i)
		n_dog->owner[i] = owner[i];
	n_dog->owner[i] = '\0';
	return (n_dog);
}
