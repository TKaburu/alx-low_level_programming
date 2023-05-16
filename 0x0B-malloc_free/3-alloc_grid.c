#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * alloc_grid - This function returns a pointer to a
 * 2 dimensional array of integers
 * @width: This i the colums of the grid
 * @height: This i the rows of the grid
 *
 * Return: NULL if empty, otherwise pointer to array
 */

int **alloc_grid(int width, int height)
{
	int m = 0, k = 0, f = 0;
	int **t;

	if (height < 1 || width < 1)
	{
		return (NULL);
	}

	t = (int **)malloc(sizeof(int *) * height);
	if (t == NULL)
	{
		free(t);
		return (NULL);
	}

	while (m < height)
	{
		t[m] = (int *) malloc(width * sizeof(int));
		t++;
	}
	if (t[m] == NULL)
	{
		while (m >= 0)
		{
			free(t[m]);
			t--;
		}
		free(t);
		return (NULL);
	}
	for  (k = 0; k < height; k++)
	{
		for (f = 0; f < width; f++)

		{
			t[k][f] = 0;
		}
	}
	return (t);
}

