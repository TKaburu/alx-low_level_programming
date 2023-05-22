#include "dog.h"

/**
 * init_dog - This function initializes the dog structure
 * @d: This reperesents the pointer to the dog struct
 * @name: This points to the name of the dog
 * @age: This is he age of the dog
 * @owner: This points to the owner of the dog
 *
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
