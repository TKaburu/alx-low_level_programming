#ifndef DOG_H
#define DOG_H

/**
 * struct dog - This is the dog struct.
 * @name: This is the name of dog
 * @age: This is the age of dog
 * @owner: This is the owner of dog
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
