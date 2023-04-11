#include "main.h"
#include <stdlib.h>

/**
* free_grid - Frees memory of 2D grid
* @grid: Grid matrix
* @height: Grid height
* Return: Void
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
