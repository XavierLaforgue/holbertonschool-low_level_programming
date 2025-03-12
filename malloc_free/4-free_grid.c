#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 * @grid: the input grid to free from memory, pointer to pointer
 * @height: number of rows in the grid. The pointer to pointer points to
 * an array of pointers, each of which contains an array of ints, height is
 * the number of arrays of ints contained in the array of pointers.
 * Return: nothing
 */

void free_grid(int **grid, int height)
{

	int i;

	for (i = 0; i < height; ++i)
	{
		free(grid[i]);
	}
	free(grid);

}
