#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 *
 * @grid: 2d array to be freed
 * @height: Row count of grid
 *
 * Return: nothing
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
