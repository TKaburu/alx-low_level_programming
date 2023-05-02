#include "main.h"

/**
 * _puts - Thi prints string to stdout
 * @str: The string that should be printed
 */
void _puts(char *str)
{
	int w;

	for (w = 0; str[w] != '\0'; w++)
	{
		_putchar(str[w]);
	}
	_putchar('\n');
}
