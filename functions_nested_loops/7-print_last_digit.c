#include "main.h"

/**
 * print_last_digit - entry point
 *
 * @n: number
 *
 * Description: prints the last digit of a number
 *
 * Return: 0 for success.
 */

int print_last_digit(int n)
{
	int i;

	i = n %  10;

	if (i < 0)
	{
		i = -i;
	}
	_putchar(i + '0');
	return (i);
}
