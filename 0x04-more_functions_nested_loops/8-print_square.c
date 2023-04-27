#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int t;
		int k;

		for (t = 0; t < size; t++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

