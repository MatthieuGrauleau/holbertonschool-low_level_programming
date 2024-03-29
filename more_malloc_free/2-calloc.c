#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array using malloc
 *
 * @nmemb: element
 * @size: size of the array
 *
 * Return: a pointer that allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		a[i] = 0;
	}
	return (a);
}
