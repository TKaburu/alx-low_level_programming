#include "variadic_functions.h"

/**
 * print_strings - This function prints strings followed by a new line.
 * @separator: This is the separator used
 * @n: This is number of arguments in the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *f;
	unsigned int m;
	va_list tk;

	va_start(tk, n);

	for (m = 0; m < n; m++)
	{
		f = va_arg(tk, char *);
		if (f == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", f);

		if (separator != NULL && m != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
