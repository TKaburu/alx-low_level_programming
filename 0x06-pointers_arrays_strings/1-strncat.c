#include "main.h"
#include <string.h>
/**
 * *_strncat - function that concatenates two strings.
 * @dest: this is the first string
 * @src: thi is second string
 * @n: number of bytes
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int t, len1;

	len1 = strlen(dest);
	for (t = 0; t < n && src[t] != '\0'; t++)
        {
		dest[len1 + t] = src[t];
	}
	dest[len1 + t] = '\0';
	return (dest);
}
