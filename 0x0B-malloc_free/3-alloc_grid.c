#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - two dimmensional array
 * @width: first int
 * @length: second integer
 * Return: 0 or null
 */

int **alloc_grid(int width, int height)
{
	unsigned int i, j;
	int **gridout;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		gridout[i] = malloc(width * sizeof(int));
		if (gridout[i] == NULL)
		{
			for (i--; i >= o; i--);
			free(gridout);
			free(gridout[i]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			gridout[i][j] = 0;
		}
	}
	return (gridout);
}
