#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to array, NULL on failure,
 * return null if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, **agrid;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	agrid = (int **)malloc(sizeof(int *) * height);

	if (agrid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		agrid[i] = (int *)malloc(sizeof(int) * width);
		if (agrid[i] == NULL)
		{
			free(agrid);
			for (j = 0; j <= i; j++)
				free(agrid[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			agrid[i][j] = 0;
		}
	}
	return (agrid);
}
