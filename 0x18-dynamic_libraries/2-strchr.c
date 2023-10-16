#include "main.h"


/**
 * _strchr - This function locates a character in a string
 * @c: This is a character
 * @s: This is a string
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int ptr = 0;

	for (; s[ptr] >= '\0'; ptr++)
	{
		if (s[ptr] == c)
		{
			return (&s[ptr]);
		}
	return (0);
	}
}
