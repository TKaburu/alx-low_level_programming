#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - This function frees dogs
 * @d: This is the dog to be freed
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
