#include "main.h"

/**
 * _sqrt_recursion_helper - auxiliary funtion found the natual squart of n
 *
 * @n: integrer
 * @i: integrer
 * Return: the natural square root of n
 */

int _sqrt_recursion_helper(int n, int i)
{
	int result = i * i;

	if (result == n)
	{
		return (i);
	} else if (result > n)
	{
		return (-1);
	}
	{
		return (_sqrt_recursion_helper(n, i + 1));
	}
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer
 *
 * Return: the natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_recursion_helper(n, 1));
}
