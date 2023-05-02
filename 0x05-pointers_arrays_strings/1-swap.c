#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: first pointer to an integer
 * @b: second pointer to an interger
 */

void swap_int(int *a, int *b)
{
	int q;

	q = *b;
	*b = *a;
	*a = q;
}
