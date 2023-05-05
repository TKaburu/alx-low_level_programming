#include "main.h"
#include <stdio.h>

/**
 * print_buffer - a function that prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int q, t, s;

	q = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (q < size)
	{
		t = size - q < 10 ? size - q : 10;
		printf("%08x: ", q);
		for (s = 0; s < 10; s++)
		{
			if (s < t)
				printf("%02x", *(b + q + s));
			else
				printf("  ");
			if (s % 2)
			{
				printf(" ");
			}
		}
		for (s = 0; s < t; s++)
		{
			int o = *(b + q + s);

			if (o < 32 || o > 132)
			{
				o = '.';
			}
			printf("%c", o);
		}
		printf("\n");
		q += 10;
	}
}

