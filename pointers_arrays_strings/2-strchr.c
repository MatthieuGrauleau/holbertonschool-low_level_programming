#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: string
 * @c: character
 *
 * Return: a pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		if (*ptr == c)
		{
			return (ptr);
		}
		ptr++;
	}

	if (c == '\0')
	{
		return (ptr);
	}

	return ('\0');
}
