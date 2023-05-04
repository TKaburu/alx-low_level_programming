#include "main.h"

/**
 * reverse_array - reverse the content of array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int t;
	int y;

	for (t = 0; t <= n--; t++)
	{
		y = a[t];
		a[t] = a[n];
		a[n] = y;
	}
}
