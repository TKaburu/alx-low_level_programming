#include "main.h"

/**
 * wildcmp - This function compares two strings
 * @s1: This is a string
 * @s2: This is a second string
 *
 * Return: 1 if strings are identical, 0 if not
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
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	if (*s1 == '\0')
	{
		return (*s2 == '\0');
	}
	else if (*s2 != '\0' && *s2 == '*')
	{
		return (wildcmp(s1, s2 + 1));
	}
	return (0);
}
