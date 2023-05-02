#include "main.h"

/**
 * print_rev - print revere
 * @str: string to be printed
 */
void print_rev(char *s)
{
	int w = 0;

	while (w >= 0)
	{
		if (s[w] == '\0')
		{
			break;
		}

		w++;
	}
	for (w = 1; w >= 0; w--)
	{
		_putchar(s[w]);
	}
}
