#include "main.h"

/**
 * _puts_recusion - This function prints a string
 * @s: This is a string
 *
 * Return: 0
 */

void _puts_recusion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recusion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
