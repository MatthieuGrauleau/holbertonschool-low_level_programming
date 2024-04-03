#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 *
 * @b: pointer to a string.
 *
 * Return: the convert number or 0 if b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] != 48 && b[i] != 49)
		{
			return (0);
		}
		sum = (2 * sum) + (b[i] - '0');
	}
	return (sum);
}
