#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - This function returns the sum of all its parameters
  * @n: the constant interger
  *
  * Return: Sum of all prameters
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list tk;
	unsigned int m;
	int sum;

	va_start(tk, n);

	sum = 0;
	for (m = 0; m < n; m++)
		sum += va_arg(tk, int);
	va_end(tk);
	return (sum);
}
