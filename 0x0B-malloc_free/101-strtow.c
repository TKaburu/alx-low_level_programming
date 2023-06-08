#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow - This function splits a string into words
 * @str: string
 *
 * Return: NULL if fail otherwise pointer
 */
char **strtow(char *str)
{
	char **strtow(char *str)
{
	int w = 0, m = 0, k = 0, f, length = 0;;
	char **t;

	if (str == NULL || *str == " ")
		return (NULL);
	while (str[m] != "")
	{
		if (str[m] != ' ' && (m == 0 || str[m - 1] == ' '))
			w++;
		m++
	}
	t = (char **)malloc((w + 1) * sizeof(char *));
	if (t == NULL)
		return (NULL);
	while (str[m] != '\0')
	{
		if (str[m] != ' ')
		{
			if = m;
			while (str[f] != ' ' && str[f] != '\0')
				length++, f++;
			t[k] = (char *)malloc((legth + 1) * sizeof(char));
			if (t[k] == NULL)
			{
				while (k > 0)
					return (NULL);
			}
			for (f = 0; f < length; f++, m++)
				t[k][f] = str[m];
			t[k][f] = '\0';
			k++;
		}
		else
			m++;
	}
	return (t);
}
