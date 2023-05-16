#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * count_word - This function counts words
 * @s: This is a string
 *
 * Return: The number of words
 */

int count_word(char *s)
{
	int xmark = 0, k = 0;

	while (*s != '\0')
	{
		if (*s == ' ')
		{
			xmark = 0;
		}
		else if (xmark == 0)
		{
			xmark = 1;
			k++;
		}
		s++;
	}
	return (k);
}

/**
 * **strtow - This function splits a string into words
 * @str: This is a string
 *
 * Return: pointer to an array of strings if successful
 * otherwise NULL
 */

char **strtow(char *str)
{
	char **split, *temp;
	int f = 0, q = 0, length = 0, w = 0, t = 0, end = 0, start = 0;

	while (*(str + length))
		length++;
	w = count_word(str);
	if (w == 0)
		return (NULL);
	split = (char **)malloc(sizeof(char *) * (w + 1));
	if (split == NULL)
		return (NULL);
	do {
		if (str[f] == ' ' || str[f] == '\0')
		{
			if (t)
			{
				end = f;
				temp = (char *)malloc(sizeof(char) * (t + 1));
				if (temp == NULL)
				{
					return (NULL);
				}
				while (start < end)
				{
					*temp++ = str[start++];
				}
				*temp = '\0';
				split[q] = temp;
				q++;
				t = 0;
			}
		}
		else if (t++ == 0)
		{
			start = f;
		}
		q++;
	} while (f <= length);
	split[q] = NULL;
	return (split);
}
