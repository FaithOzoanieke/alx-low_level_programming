#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid.
 * @gridpoint: multidimensional array of integers.
 * @height: the height of the grid.
 *
 * Return: no return
 */

void free_grid(int **gridpoint, int height)
{
	if (gridpoint != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(gridpoint[height]);
		free(gridpoint);
	}
}
