#include "main.h"
#include <stdlib.h>

/**
 * free_grid - This function frees 2 dimentional grid
 * @grid: 
 * @height:
 *
 * Returns: (0)
 */

void free_grid(int **grid, int height)
{
	int t = 0;
	
	if (height <= 0)
	{
		return;
	}
	while (t < height)
	{
		free(grid[t]);
		t++;
	}
	if (grid == NULL)
	{
		return;
	}
	free(grid);
}
