#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: array
 * @size: the size of array
 * @cmp: point to the function to be used to compare values
 * Return: if no element -1 or the index of the array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
