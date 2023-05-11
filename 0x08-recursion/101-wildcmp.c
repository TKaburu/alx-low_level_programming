#include "main.h"

/**
 * wildcmp - This function compares strings
 * @s1: points to a string
 * @s2: points to a string
 *
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		return (1);
	}
	if (*s1 != *s2)
	{
		return (0);
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || (wildcmp(s2 + 1, *s1)));
	}
	else if (*s1 == '\0')
	{
		return (*s2 == '\0');
	}
	else if (*s2 != '\0' && *s2 == '*')
	{
		return (wildcmp(s1, s2 + 1));
	}
	return (0);
}
