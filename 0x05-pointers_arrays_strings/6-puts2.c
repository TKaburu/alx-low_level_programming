#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: String to be printed
 * Return: 0
 */
void puts2(char *str)
{
	int t = 0;

	while (str[t] != '\0')
	{
		if (t % 2 == 0)
		{
			_putchar(str[t]);
		}
		t++;

	}
	_putchar('\n');
}

