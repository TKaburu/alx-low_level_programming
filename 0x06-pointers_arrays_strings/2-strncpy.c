#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int t;

	for (t = 0; t < n && src[t] != '\0'; t++)
	{

		dest[t] = src[t];
	}
	if (t < n)
	{
		dest[t] = '\0';
		t++;
	}
return (dest);
}
