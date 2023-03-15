#include <stdlib.h>
#include "main.h"

/**
 * free_gri - frees previously allocated memory
 * @grid: grid to be freed
 * @height: height of outgoing grid
 * Return: always 0.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
