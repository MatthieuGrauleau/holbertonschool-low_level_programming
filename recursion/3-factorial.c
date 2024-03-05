#include "main.h"

/**
 * factorial - function that returns of a given number
 * @n: number
 * Return: 0 for success.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (1);
}
