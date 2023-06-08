#include "main.h"
#include <string.h>
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
	unsigned int length1 = 0, length2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[length1] != '\0'}
	{
		lemgth1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	if (n > length2)
	{
		n = length2;
	}

	char *t = malloc(strlen(s1) + 1 + n);
	if (t == NULL)
	{
		return (NULL);
	}
	int m;

	for (m = 0; m < length1; m++)
	{
		t[m] = s2[m];
	}

	m = 0;

	while (m <(length1 - n))
	{
		t[m] = s2[m - length1];
	}
	t[m] = '\0';
	return (t);
}

