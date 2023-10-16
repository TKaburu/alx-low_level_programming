#include "main.h"

/**
 * _memcpy - This function copies one memory area
 * to another
 * @dest: destination of the memory copied
 * @src: source of the memory being copied
 * @n: number of bytes to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int t = 0;

	while (n-- > 0)
	{
		dest[t] = src[t];
		t++;
	}
	return (dest);
}
