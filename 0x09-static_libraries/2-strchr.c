#include "main.h"
#include <string.h>

/**
 * _strchr - This function  ptints a character in a string.
 * @s: is a string
 * @c: character to be located
 * Return: ('\0')
 */

char *_strchr(char *s, char c)
{
	int ptr;

	for (ptr = 0; s[ptr] >= '\0'; ptr++)
	{
		if (s[ptr] == c)
		{
			return (&s[ptr]);
		}
	}
	return ('\0');
}
