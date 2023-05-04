#include "main.h"
#include <string.h>

/**
 * _strcat - This  concatenates two strings
 * @src: value of input
 * @dest: value of input
 *
 * Return void
 */
char *_strcat(char *dest, char *src)
{
	int len1, t;

	len1 = strlen(dest);

	for (t = 0; t <= len1; t++)
	{
		dest[len1 + 1] = src[t];
	}
	return (dest);
}
