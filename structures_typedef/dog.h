#ifndef dog_h
#define dog_h

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

void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
