#include "main.h"
/**
 * _strncpy - This function copies a string
 * @dest: input value
 * @src: input value
 * @n: interger
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
	for (; t < n; t++)
	{
		dest[t] = '\0';
	}
return (dest);
}
