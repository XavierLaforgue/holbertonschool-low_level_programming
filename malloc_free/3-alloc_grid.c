#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates memory for a 2-dimensonal array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to the 2-d array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width > 0 && height > 0)
	{
		grid = malloc(height * sizeof(int *));
		if (grid == NULL)
			return (NULL);
		for (i = 0; i < height; ++i)
		{
			grid[i] = malloc(width * sizeof(int));
			for (j = 0; j < width; ++j)
				grid[i][j] = 0;
		}
	}
	else
	{
		return (NULL);
	}
	return (grid);
}
