#include "main.h"

/**
 * print_chessboard - This function prints out the chessboard
 * @a: This is an array
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int t = 0;

	while (t < 8)

	{
		int q;

		for (q = 0; q < 8; q++)
		{
			_putchar(a[t][q]);

		}
	_putchar('\n');
	t++;
	}
}
