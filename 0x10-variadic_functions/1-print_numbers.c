#include "variadic_functions.h"

/**
 * print_numbers - This function prints numbers
 * followed by  new line
 * @separator: This is the separator character to be used
 * @n: This is the number of integers
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	va_list tk;

	va_start(tk, n);

	for (m = 0; m < n; m++)
	{
		printf("%d", va_arg(tk, int));
		if (separator != NULL && m != n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(tk);
	printf("\n");
}
