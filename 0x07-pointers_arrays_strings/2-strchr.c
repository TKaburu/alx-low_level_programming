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

	while (s[ptr] != '\0')
	{
		if (s[ptr] == c)
		{
			return (&s[ptr]);
		}

		ptr++;
		return (0);
	}
}
