#include "main.h"

/**
 * print_rev - entry point
 *
 * @s: string
 *
 * Description: print a string in reverse
 *
 * Return: 0 for success.
 */

void print_rev(char *s)
{
	int len;
	int i;

	len = 0;
	while (*s++)
	{
		len++;
	}

	for (i = (len + 1); i >= 0; s--)
	{
		_putchar(*s);
		i--;
	}
	_putchar('\n');
}
