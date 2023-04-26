#include "main.h"

/**
 * jack_bauer -prints every minute of the day
 *
 * Return: Always (0).
 */

void jack_bauer(void)
{
	int n;
	int m;

	for (n = 0; n <= 23; n++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar (n / 10 + '0');
			_putchar (n % 10 + '0');
			_putchar (':');
			_putchar (m / 10 + '0');
			_putchar (m % 10 + '0');
			_putchar ('\n');

		}


	}

}
