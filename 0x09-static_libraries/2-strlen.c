#include "main.h"

/**
 *  _strlen - This returns the length of a string
 *  @s: This is the string we need length of
 *
 *  Return: Length of string
 */
int _strlen(char *s)
{

	int q = 0;

	while (s[q] != '\0')
	{
		q++;
	}

	return (q);
}
