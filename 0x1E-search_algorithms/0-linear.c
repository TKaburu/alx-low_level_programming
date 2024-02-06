#include "search_algos.h"

/**
 * linear_search - A function that uses Linear search algorithm
 * to search for a value in an array
 * @array: Pointer to the  first element of the array to search in
 * @size: Size of the array
 * @value: The value searched for
 *
 * Return: value or -1 if value doesn't exist or array is Null
 */

int linear_search(int *array, size_t size, int value)
{
	size_t current = 0;

	if (array == NULL)
		return (-1);

	while (current < size)
	{
		/* Print the value being compared*/
		printf("Value checked array[%lu] = [%d]\n", current, array[current]);

		/* Check if the current element is equal to the value*/
		if (array[current] == value)
			return (current); /* Return the index where the value is located */
		current++;
	}

	/* Value not found in the array */
	return (-1);
}
