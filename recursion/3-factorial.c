#include "main.h"

/**
 * factorial - function that returns of a given number
 * @n: number
 * Return: 0 for success.
 */

int factorial(int n)
{
	int res = 1, i = 1;

	while (i <= n)
	{
		res = res * i;
		i++;
	}
	if (n < 0)
	{
		return (-1);
	}
	return (res);
}
