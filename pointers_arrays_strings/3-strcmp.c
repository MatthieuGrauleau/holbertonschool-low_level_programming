#include "main.h"

/**
 * _strcmp - function that compares twho strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: the result
 */

int _strcmp(char *s1, char *s2)
{
	int index = 0;
	int s1len = 0;
	int s2len = 0;
	int result = 0;
	
	while (s1[index++])
	{
		s1len++;
	}
	while (s2[index++])
	{
		s2len++;
	}

	result = s1len - s2len;

	if (result < 0)
	{
		return (-1);
	} else if (result == 0)
	{
		return (0);
	} else
	{
		return (1);
	}
}
