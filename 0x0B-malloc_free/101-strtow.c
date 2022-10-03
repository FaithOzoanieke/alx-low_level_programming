#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - frees a 2 dimensional array.
 * @gridpoint: multidimensional array of char.
 * @height: height of the array.
 *
 * Return: no return
 */

void ch_free_grid(char **gridpoint, unsigned int height)
{
	if (gridpoint != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(gridpoint[height]);
		free(gridpoint[height]);
		free(gridpoint);
	}
}

/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer of an array of integers
 */

char **strtow(char *str)
{
	char **result;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	result = malloc((height + 1) * sizeof(char *));
	if (result == NULL || height == 0)
	{
		free(result);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				result[i] = malloc((c - a1 + 2) * sizeof(char));
				if (result[i] == NULL)
				{
					ch_free_grid(result, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			result[i][j] = str[a1];
		result[i][j] = '\0';
	}
	result[i] = NULL;
	return (result);
}
