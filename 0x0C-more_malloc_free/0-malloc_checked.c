#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - This function allocates memmory
 * using malloc
 * @b: unsigned int
 *
 * Return: pointerto memory
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	/*if memmory allocation is not succesful terminate*/

	if (p == NULL)
	{
		exit(98);
	}
	else
	{
		return (p);
	}
}
