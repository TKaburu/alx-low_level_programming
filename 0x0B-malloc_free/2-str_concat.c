#include "main.h"
#include <stdlib.h>

/**
 * str_concat - This is  a function that concatenates two strings.
 * @s1: This is the first string
 * @s2: This is the second string
 *
 * Return: NULL if it fails otherwise the string
 */

char *str_concat(char *s1, char *s2)
{
	char *t;
	unsigned int m, k, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/*Get the length of the strings*/
	m = 0;
	while (s1[m] != '\0')
	{
		m++;
	}
	k = 0;
	while (s2[k] != '\0')
	{
		k++;
	}

	t = malloc((m + k + 1) * sizeof(char));
	if (t == NULL)
	{
		return (NULL);  /* Return NULL if memory allocation fails*/
	}
	/* copying the strings */
	for (i = 0; i < m; i++)
	{
		t[i] = s1[i];
	}
	for (j = 0; j < k; j++)
	{
		t[i + j] = s2[j];
	}
	t[i + j] = '\0'; /* This terminates the concatenated string */
	return (t);
}
