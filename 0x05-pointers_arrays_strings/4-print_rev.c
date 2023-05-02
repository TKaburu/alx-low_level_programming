#include "main.h"

/**
 * _puts- prints a string and a new line
 * @str: string to be printed
 */
void _puts(char *str)
{
	int w = 0;
	int t;

	while (str[w] != '\0')
	{
		w++;
	}

	for (t = 'w'-1; t >= 0; t--)
	{
		_putchar(str[t]);
	}
	_putchar('\n');
}
