#include "function_pointers.h"

/**
 * int_index - This function searches for an integer
 * @array: This is a pointerto the array
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int t;

	if (size <= 0)
		return (-1);
	if (cmp == NULL || array == NULL)
		return (-1);
	t = 0;

	while (t < size)
	{

		if (cmp(array[t]))
		{
			return (t);
		}
		t++;
	}
	return(-1);
}
