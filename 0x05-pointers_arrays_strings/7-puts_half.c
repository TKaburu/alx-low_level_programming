#include "main.h"

/**
 * puts_half - prints out half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int t, s, q;

	t = 0;

	while (str[t] != '\0')
	{
		t++;
	}

	if (t % 2 == 0)
	{
		for (q = t / 2; str[q] != '\0'; q++)
		{
			_putchar(str[q]);
		}
	} else if (t % 2)
	{
		for (s = (t - 1) / 2; s < t - 1; s++)
		{
			_putchar(str[s + 1]);
		}
	}
	_putchar('\n');
}
