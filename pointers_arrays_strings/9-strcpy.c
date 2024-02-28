#include "main.h"

/**
 * _strcpy - functions that copies the string pointed
 *
 * @dest : fichier de destionation
 * @src: fichier source
 *
 * Return: the both value
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;
	char *finaldest = dest;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	*dest = '\0';
	return (finaldest);
}
