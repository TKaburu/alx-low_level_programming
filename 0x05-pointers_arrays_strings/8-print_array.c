#include "main.h"
#include <stdio.h>

/**
 * print_array - prints out array of integers
 * @a: This is the ipointer to the char
 * @n: The number of elements of the array
 */

void print_array(int *a, int n)
{
	int q = 0;

	while (q < n)
	{
		if (q != n - 1)
		{
		printf("%d, ", a[q]);
		}
		else
		{
			printf("%d", a[q]);
		}
		q++;
	}
	printf("\n");
}
