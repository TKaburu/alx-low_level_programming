#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet 10 times in lowercase
 *
 * Return: Always o
 */
void print_alphabet_x10(void)
{
	int a;
	int n;

	n = 0;
	while (n <= 10)
	{
		for (a = 'a';  a <= 'z'; a++)
		{
			_putchar(a);
		}

		n++;
		_putchar('\n');
	}
}
