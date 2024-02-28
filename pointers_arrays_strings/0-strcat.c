#include "main.h"

/**
 * _strcat - function that concatenates twho strings
 *
 * @dest: destination
 * @src: source
 *
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int destlen = 0;

	while (dest[index++])
	{
		destlen++;
	}
	for (index = 0; src[index]; index++)
	{
		dest[destlen++] = src[index];
	}
	return (dest);
}
