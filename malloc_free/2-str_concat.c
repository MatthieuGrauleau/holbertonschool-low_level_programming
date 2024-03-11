#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int len;
	int lenconcat = 0;
	char *a;

	if (s1 == 0 || s2 == 0)
	{
		return (NULL);
	}

	for (i = 0; s1[i] || s2[i]; i++)
	{
		len++;
	}

	a = malloc(sizeof(char) * len);

	if (a == 0)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		a[lenconcat++] = s1[i];
	}

	for (i = 0; s2[i]; i++)
	{
		a[lenconcat++] = s2[i];
	}

	return (a);
}
