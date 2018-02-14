#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

int **alloc_grid(int width, int height)
{
	int **grid, i;

	grid =  (int**) malloc(height * sizeof(int*));

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
	}
	return (grid);
}
