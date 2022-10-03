#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the width of the array.
 * @height: the height of the array.
 *
 * Return: pointer of an array of integers
 */

int **alloc_grid(int width, int height)
{
	int **gridoutput;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	gridoutput = malloc(height * sizeof(int *));
	if (gridoutput == NULL)
	{
		free(gridoutput);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		gridoutput[i] = malloc(width * sizeof(int));
		if (gridoutput[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gridoutput[i]);
			free(gridoutput);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			gridoutput[i][j] = 0;
	return (gridoutput);
}
