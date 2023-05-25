#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_all - This function prints anything
 * @format: This is arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char *
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list tk;
	unsigned int m = 0;
	char c;
	int n;
	float f;
	char *s;

	va_start(tk, format);
	while (format != NULL && format[m] != '\0')
	{
		switch (format[m])
		{
			case 'c':
				c = va_arg(tk, int), printf("%c", c);
				break;
			case 'i':
				n = va_arg(tk, int), printf("%d", n);
				break;
			case 'f':
				f = (float) va_arg(tk, double), printf("%f", f);
				break;
			case 's':
				s = va_arg(tk, char *), printf("%s", s != NULL ? s : "(nil)");
				break;
			default:
				m++;
				continue;
		}


		if (format[m + 1] != '\0')
		{
			char *sept = ", ";

			printf("%s", sept);
		}
		m++;
	}
	va_end(tk), printf("\n");
}
