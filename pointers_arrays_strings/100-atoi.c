#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 *
 * @s: string
 *
 * Return: numbers
 */

int _atoi(char *s)
{
	int sign = 1;
	int number = 0;

	while (*s == ' ' || *s == '-' || *s == '+')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		s++;
	}

	while (*s && (*s < '0' || *s > '9'))
	{
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		number = (number *  10) + (*s - '0');
		s++;
	}
	return (number * sign);
}
