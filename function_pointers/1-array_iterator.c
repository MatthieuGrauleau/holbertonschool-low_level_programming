#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a paremeter on
 * each element of an array.
 *
 * @array: array
 * @size: size of the array
 * @action: a pointer to the function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	while (size > 0)
	{
		action(*array);
		array++;
		size--;
	}
}
