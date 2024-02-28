#include "main.h"

/**
 * _strncat - concatenates twho strings
 *
 * @dest: destination
 * @src: source
 * @n: nombre de caract√res
 *
 * Return: the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int destlen = 0;
	int indexsrc = 0;
	int totallen = 0;

	while (dest[index++])
	{
		destlen++;
	}
	while (src[indexsrc++])
	{
		indexsrc++;
	}

	totallen = destlen + indexsrc;
	if (n < totallen)
	{
		for (index = 0; src[index] <= src[n - 1]; index++)
		{
			dest[destlen++] = src[index];
		}
	} else 
	{
		dest[destlen++] = src[index];
	}
	return (dest);
}
