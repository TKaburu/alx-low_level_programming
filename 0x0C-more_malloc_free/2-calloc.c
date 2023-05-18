#include "main.h"

/**
 * _calloc - This function allocates memory of rray using
 * malloc
 * @nmemb: This is an unsigned int
 * @size: This is an unsigned int
 *
 * Return: pointer otherwise NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int k;
	char *t;
	/* If nmemb or size is 0, then*/

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	t = malloc(nmemb * size);
	/*check if allocation of memory is succesful */
	if (t == 0)
	{
		return (NULL);
	}
	k = 0;
	/*sets value of the memory allocate*/

	do {
		*(t + 1) = 0;
		k++;
	} while (k < nmemb * size);

	return (t);
}
