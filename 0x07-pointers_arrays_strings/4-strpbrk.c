#include "main.h"

/**
 * _strpbrk - This function gets the set of
 * bytes in any string
 * @s: This is the string
 * @accept: This is the input searched for
 *
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int t;

	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
			if (*s == accept[t])
				return (s);
		}


		s++;
	}
	return ('\0');
}
