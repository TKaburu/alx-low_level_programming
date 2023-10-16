#include "main.h"
#include <string.h>

/**
 * _strspn - This functions gets length of a substring
 * @s: string to be checked
 * @accept: the prefix substring
 * Return: unsigned int bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int t = 0;

	if (s == NULL || accept == NULL)
	{
		return (t);
	}
	while (*s && strchr(accept, *s++))
	{
		t++;
	}
	return (t);
}
