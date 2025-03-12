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
	/*
	 * Ideas: (1) change name of pointer to struct to be different from the
	 * function; (2) cast the desired type ouptut of the mallocs; (3)
	 * measure the strings and use that in malloc; (4) remove extra
	 * comments 
	 */
	dog_t *new_dog;
	unsigned int i;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	/*
	 * if I do this:
	 * new_dog->name = name;
	 * I am copying the adress of a string (which is at a magical
	 * unwritable memory section), therefore it would be unmodifiable
	 * later on; this is why we need to make a copy of it
	 */
	new_dog->name = malloc(sizeof(name));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; ++i)
		new_dog->name[i] = name[i];
	new_dog->name[i] = '\0';
	new_dog->age = age;
	new_dog->owner = malloc(sizeof(owner));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; ++i)
		new_dog->owner[i] = owner[i];
	new_dog->owner[i] = '\0';
	return (new_dog);
}
