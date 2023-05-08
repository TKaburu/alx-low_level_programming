#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Thisfunction prints the sum of two
 * diagonals of a square matrix of integers.
 *@a: integer
 *@size: input of size
 *Return: 0
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, t;

	sum1 = 0;
	sum2 = 0;
	t = 0;

	while (t < size)
	{
		sum1 = sum1 + a[t * size + t];
		t++;
	}
	for (t = size - 1; t >= 0; t--)
	{
		sum2 += a[t * size + (size - t - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
