#include "main.h"

#include <stdlib.h>

/**
 * array_range - This function creates an array of integers
 * @min: This is the minimum value
 * @max: This is the maximum value
 *
 * Return: NULL if fail. Otherwise Pointer.
 */
int *array_range(int min, int max)
{
	int k;
	int *t;

	if (min > max)
	{
		return (NULL);
	}

	t = malloc((max - min + 1) * sizeof(int));

	if (t == NULL)
	{
		return (0);
	}

	k = 0;

	do {
		t[k] = min + k;
		k++;
	} while (k < max - min + 1);

	return (t);
}

