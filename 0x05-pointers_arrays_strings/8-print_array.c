#include "main.h"
#include <stdio.h>

/**
 * print_array - prints out array of integers
 * @a: This is the ipointer to the char
 * @n: The number of elements of the array
 */

void print_array(int *a, int n)
{
	int t = 0;

	while (t < n)
	{
		if (t != n - 1)
		{
		printf("%d, ", a[t]);
		}
		else
		{
			printf("%d", a[t]);
		}
		t++;
	}
	printf("\n");
}
