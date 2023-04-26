#include "main.h"

/**
 * print_last_digit - prints last digit of  number
 *
 * @n: inputs last digit of  number
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		_putchar(-ld + 48);
		return (-ld);
	}
	else
	{
		_putchar(ld + 48);
		return (1);
	}
	_putchar('\n');
}
