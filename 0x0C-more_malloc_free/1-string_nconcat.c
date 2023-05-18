#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - This function concatenates two strings
 * and point to new allocated memory
 * @s1: The first string
 * @s2: The second string
 * @n: Unsigned int
 *
 * Return: NULL if failed otherwise pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int m = 0, k = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}
	do {
		m++;
	} while (s1[m] != '\0');

	t = malloc((m * sizeof(char)) + n + 1);
	if (t == NULL)
	{
		return (0);
	}

	for (k = 0; k < m + n; k++)
	{
		if (k < m)
		{
			t[m] = s1[k];
		}
		else
		{
			t[m] = s2[k - 1];
		{
	}
	t[m] = '\0';
	return (t);
}
