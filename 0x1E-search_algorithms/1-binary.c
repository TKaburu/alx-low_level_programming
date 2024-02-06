#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: Pointer to the 1st elemnt of the array list
 * @size: Number of elements of the array
 * @value: The value we are searching for
 *
 * Return: -1 if value is not found, or array is null
 * otherwise index of value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t current = 0;
	size_t left = 0, middle, right = size - 1;

	if (array == NULL)
		return (-1);

	/* loop and print the whole list */
	while (left <= right)
	{
		printf("Searching in array: ");

		current = left;
		while (current <= right)
		{
			printf("%d", array[current]);
			if (current < right)
				printf(", ");

			current++;
		}
		printf("\n");

		/* Get the middle */
		middle = (left + right) / 2;

		/* If value is greater, search in the right half */
		if (array[middle] < value)
			left = middle + 1;

		/* Search left half */
		else
			right = middle - 1;
	}

	return (-1);
}
