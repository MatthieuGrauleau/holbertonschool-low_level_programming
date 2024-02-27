#include "main.h"

/**
 * puts_half - entry point
 *
 * @str: string
 *
 * Return: 0 for success.
 */

void puts_half(char *str)
{
	int i;
	int len;

	for (len = 0; str[len]; len++)
	{
		;
	}

	if ((len % 2) == 0)
	{
		i = len / 2;
	} else
	{
		i = (len + 1) / 2;
	}
	while (i < len)
	{
		_putchar(str[i++]);
	}
	_putchar('\n');
}
