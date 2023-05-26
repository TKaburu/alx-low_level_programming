#include "function_pointers.h"

/**
 * array_iterator - This function executes a function given as a
 * parameter on each element of an array
 * @array: Pointer to an array
 * @action: Pointer to function
 * @size: size of array
 *
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int t;

	if (action == NULL || array == NULL)
		return;

	for (t = 0; t < size; t++)
	{
		action(array[t]);
	}


}
