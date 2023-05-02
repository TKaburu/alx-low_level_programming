#include "main.h"
#include <stdio.h>

/**
 * print_array - prints out array of integers
 * @a: This is thepointer to the char
 * @n: The number of elements of the array
 */

void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		if (t != n - 1)
		{
			printf("%d, ", a[t]);
		}
		else
		{
			printf("%d", a[t]);
		}
	}
	_putchar('\n');
}
