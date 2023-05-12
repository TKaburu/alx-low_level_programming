#include "main.h"
#include <string.h>

/**
 * _strcmp- This function compares two strings
 * @s1: string one
 * @s2: string two.
 * Return: integer 
 */
int _strcmp(char *s1, char *s2)
{
	int t;

	t = strcmp(s1, s2);
	if (t == 0)
	{
		return (0);
	}
	else
	{
		return (t);
	}
}
