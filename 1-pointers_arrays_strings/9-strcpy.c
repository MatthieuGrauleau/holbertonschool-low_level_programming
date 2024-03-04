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
	char *finaldest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (finaldest);
}
