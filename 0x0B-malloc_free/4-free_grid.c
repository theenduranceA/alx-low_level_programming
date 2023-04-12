#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Function that frees 2-D grid.
 * @grid: 2d grid
 * @height: height dimension of grid
 *
 * Return: 0
 *
 */
void free_grid(int **grid, int height)
{
	int x = 0;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
