#include "main.h"


/**
 * _strstr - This function locates substring
 * @needle: This is a substring
 * @haystack: This is the string
 *
 *Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *t = needle;
		char *u = haystack;

		for (; *u == *t && *t != '\0'; u++)
		{
			t++;
		}
		if (*t == '\0')
		{
			return (haystack);
		}

		haystack++;
	}
	return (0);
}

