#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: grid
 * @height: integer
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int j = 0;

	for (; j < height; j++)
		free(grid[j]);
	free(grid);
}
