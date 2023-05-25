#include "variadic_functions.h"

/**
 * sum_them_all - This function returns the sum of all it's parameters
 * @n: This is the number of parameters
 *
 * Return: The sum of all parmeters.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int m, sum;
	va_list tk;

	va_start(tk, n);

	if (n == 0)
	{
		return (0);
	}

	sum = 0;

	for (m = 0; m < n; m++)
	{
		sum = sum + va_arg(tk, int);
	}
	va_end(tk);

	return (sum);
}
