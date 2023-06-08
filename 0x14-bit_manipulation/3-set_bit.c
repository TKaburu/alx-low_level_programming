#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: pointer to integer
 * @index: index of bit to be set.
 *
 * Return: 1 if successful, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int count = 1;

	if (index > 64)
	{
		return (-1);
	}	

	count = count << index;
	*n = *n | count;

	return (1);
}
