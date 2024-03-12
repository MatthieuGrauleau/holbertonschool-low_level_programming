#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 *
 * @b: integrer
 *
 * Return: pointer to the allocate memory
 */

void *malloc_checked(unsigned int b)
{
	int *memory;

	memory = malloc(b);

	if (memory == NULL)
	{
		exit(98);
	}
	return (memory);
}
