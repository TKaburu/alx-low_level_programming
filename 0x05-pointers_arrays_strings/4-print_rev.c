#include "main.h"

/**
 * print_rev - print out string in revere
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int l = 0;
	int t;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (t = l; t > 0; t--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
