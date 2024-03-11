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
	int i;
	int **w;

	if ( width <= 0 || height <= 0)
	{
		return(NULL);
	}

	w = malloc(sizeof(int *) * width);

	for (i = 0; i < width; i++)
	{
		free(w[i]);
		w[i] = malloc(sizeof(int) * height);
	}
	free(w);
	return(w);
}
