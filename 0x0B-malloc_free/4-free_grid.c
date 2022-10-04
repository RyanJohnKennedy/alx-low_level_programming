#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - clears a 2D array
 * @grid: array
 * @height: int
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
