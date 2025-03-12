#ifndef dog_H
#define dog_H

/**
 * struct dog - structure that contains the characeteristics of a dog
 * @name: string, name of the dog
 * @age: float, age of the dog
 * @owner: string, name of the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
