#include "main.h"
#include <string.h>

/**
 * *_strcat - This  concatenates two strings
 * @src: value of input
 * @dest: value of input
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int t, len1, len2;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (t = 0; t <= len2; t++)
	{
		dest[len1 + t] = src[t];
	}
	return (dest);
}
