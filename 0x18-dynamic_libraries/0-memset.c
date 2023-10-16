#include "main.h"

/**
 * _memset - This function fills memory with a constant byte
 * @n: This is the byte size of memory area
 * @b: This is a constant byte
 * @s: pointer
 *
 * Return: 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *point = s;
	unsigned int t;

	for (t = 0; t < n; t++)
	{
		*point = b;
		point++;
	}
	return (s);
}
