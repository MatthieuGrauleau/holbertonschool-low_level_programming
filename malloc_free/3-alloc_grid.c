#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers.
 *
 * @width: width
 * @height: height
 *
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **w;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	w = malloc(sizeof(int *) * height);
	if (w == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		w[i] = malloc(sizeof(int) * width);
		if (w[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(w[j]);
			}
			free(w);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			w[i][j] = 0;
		}
	}
	return (w);
}
