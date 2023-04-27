#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	char t;

	for (t = 48; t <= 57; t++)
	{
		_putchar(t);
	}
	_putchar('\n');
}
