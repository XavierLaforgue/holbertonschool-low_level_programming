#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
	int w;
	int h;

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			printf("%d ", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int **grid;
	int width, height;

	width = 0;
	height = 4;
	grid = alloc_grid(width, height);
	if (grid == NULL)
	{
		return (1);
	}

	print_grid(grid, width, height);
	printf("\n");
	if (height >= 3)
		grid[0][3] = 98;
	if (width >= 4 && height >= 3)
		grid[3][4] = 402;
	print_grid(grid, width, height);

	return (0);
}
