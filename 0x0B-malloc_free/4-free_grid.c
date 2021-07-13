#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - returns a grid of ints
 * @grid: the address of the 2D grid
 * @height: height of the grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int j = 0;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
free(grid);
}
