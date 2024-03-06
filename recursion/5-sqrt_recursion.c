#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a num
 *
 * @n: integrer
 * Return: the natural square root
 */

int _sqrt_recursion(int n)
{
	int i = 1;
	int result = 1;

	if (n == 0 || n == 1)
	{
		return (n);
	}
	while (result <= n)
	{
		if (result == n)
		{
			return (i);
		}
		i++;
		result = i * i;
	}
	return (-1);
}
