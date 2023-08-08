#include "main.h"

/**
 * free_grid - free the grid
 * @grid: grid of memories
 * @height: int
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	if (width <= 0 || height <= 0 || tab == 0)
	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
