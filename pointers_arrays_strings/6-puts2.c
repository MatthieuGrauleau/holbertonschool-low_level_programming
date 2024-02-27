#include "main.h"

/**
 * puts2 - entry point
 *
 * @str: string
 *
 * Description: prints every other character of a string
 *
 * Return: 0 for success.
 */

void puts2(char *str)
{
	int i = 0;
	int len;

	for (len = 0; str[len]; len++)
	{
		;
	}
	while (str[i++] && i < len)
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
