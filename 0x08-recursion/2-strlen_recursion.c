#include "main.h"

/**
 *_strlen_recursion - This function print out the length of string
 *@s: This is a string
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

