#include "main.h"

/**
 * _strncat - concatenates twho strings
 *
 * @dest: destination
 * @src: source
 * @n: nombre de caractĂres
 *
 * Return: the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int destlen = 0;

	while (dest[index++])
	{
		destlen++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[destlen++] = src[index];
	}
	return (dest);
}
