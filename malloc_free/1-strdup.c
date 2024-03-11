#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 *
 * @str: string
 *
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *a;
	int i;
	int len;

	if (str == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		len++;
	}

	a = malloc(sizeof(char) * len + 1);

	if (a == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
