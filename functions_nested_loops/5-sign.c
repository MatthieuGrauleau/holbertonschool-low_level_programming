#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: nombre
 *
 * Description: prints the sign of a number a 1 and + if it's greater than zero
 *
 * Return: 0 for success.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	{
		_putchar('-');
		return (-1);
	}
}
