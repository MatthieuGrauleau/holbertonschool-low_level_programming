#include "main.h"

/**
 * puts_half - entry point
 *
 * @str
 *
 * Description: prints half of a string
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
	
	i = len / 2;
	
	while (i < len)
	{
		_putchar(str[i++]);		
	}
	_putchar('\n');
}
