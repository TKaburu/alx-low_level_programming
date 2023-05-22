#include "stdlib.h"
#include "dog.h"

/**
 * new_dog - This is a new function
 * @name: This is the name of dog
 * @age: This is the age of dog
 * @owner: This is the owner of dog
 *
 * Return: NULL if fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *a, *b;
	int t = 0, m = 0, k = 0, i = 0;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[t] != '\0')
		t++;/** finding the length of name and owner*/
	while (owner[m] != '\0')
		m++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	a = malloc(sizeof(char) * t + 1);
	if (a == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	b = malloc(sizeof(char) * m + 1);
	if (b == NULL)
	{
		free(new_dog);
		free(a);
		return (NULL);
	}
	/**copying string*/
	do {
		a[k] = name[k];
		k++;
	} while (k <= t);
	while (i <= m)
	{
		b[i] = owner[i];
		i++;
	}
	new_dog->name = a;
	new_dog->age = age;
	new_dog->owner = b;
	return (new_dog);
}
