#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created
 * @grid: pointer to a grid
 * @height: number of rows in grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
