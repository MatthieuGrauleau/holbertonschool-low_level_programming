#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 *
 * @min: minimum
 * @max: maximum
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *a;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	a = malloc(sizeof(int) * size);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = min++;
	}
	return (a);
}
