#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: number
 *
 * Description: function that computes the absolute value of an integer.
 *
 * Return: 0 for success.
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	{
		return (n * -1);
	}
	return (0);
}
