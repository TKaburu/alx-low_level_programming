#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * argstostr - This is a function that concatenates all the
 * arguments of your program.
 * @ac: This is an integer
 * @av: Thi is a pointer to a pointer to n array
 *
 * Return: NULL if it fails, otherwise the string
 */

char *argstostr(int ac, char **av)
{
	char *t;
	int length = 0;
	int m = 0, k, f = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/* getting length of the string */

	do {
		length += strlen(av[m]) + 1;
		m++;
	} while (m < ac);
	t = malloc((length + 1) * sizeof(char));

	/* if memory allocation fails return '\0'*/
	if (t == NULL)
	{
		return (NULL);
	}

	m = 0;  /* Reset m to 0 for the new loop to copy char*/
	while (m < ac)
	{
		k = 0;  /* Reset k to 0 for the new loop*/
		while (av[m][k])
		{
			t[f] = av[m][k];
			k++;
			f++;
		}
		t[f] = '\n';
		m++;
		f++;
	}
	t[f] = '\0';
	return (t);
}

