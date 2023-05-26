#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - This function prints numbers
  * @separator - This is the eparator used in the string
  * @n: number of intergers passed to the function
  *
  * Return: if separator is NULL do not print
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int m;
	va_list tk;

	va_start(tk, n);

	m = 0;

	while (m < n)
	{
		printf("%d", va_arg(tk, int));

		if (m< n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		m++;
	}
	printf("\n");
	va_end(tk);
}
