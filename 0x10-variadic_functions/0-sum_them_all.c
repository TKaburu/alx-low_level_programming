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

	m = 0, sum = 0;

	do {
		sum = sum + va_arg(tk, int);
		m++;
	} while (m < n);
	va_end(tk);

	return (sum);
}
