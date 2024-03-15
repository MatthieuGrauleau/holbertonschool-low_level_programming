#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 *
 * @ac: elements
 * @av: array
 *
 * Return: Pointer to a new string or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	char *a;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		len++;
	}

	a = malloc(sizeof(char) * (len + 1));
	if (a == NULL)
	{
		return (NULL);
	}

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			a[len++] = av[i][j];
		}
		a[len++] = '\n';
	}
	a[len] = '\0';
	return (a);
}
