#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - This function creates an array of char
 * @size: This is the size of the array
 * @c: This i the charcter to be assigned
 *
 * Return: NULL if it fails otherwise return the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int t;
	char *k;

	k = malloc(sizeof(char) * size);

	if (size == 0 && k == 0) /*if both size nd pointer k = 0 the print NULL*/
	{
		return ('\0');
	}

	t = 0;

	while (t < size)
	{	
		k[t] = c;
		t++;
	}
	return (k); /*Returns the pointer of array since progrm passed*/
}
