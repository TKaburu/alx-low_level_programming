#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - This function prints out a name
 * @name: point to the name printed
 * @f: Pointer to the function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);

	if (f == NULL || name == NULL)
	{
		return;
	}
}
