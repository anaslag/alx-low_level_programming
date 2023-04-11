#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory allocateto the grid
 * created by alloc_grid()
 * @grid: grid
 * @hgt: height of the grid
 */
void free_grid(int **grid, int hgt)
{
	int i;

	if (grid == NULL || hgt == 0)
		return;

	for (i = 0; i < hgt; i++)
		free(grid[i]);

	free(grid);
}
