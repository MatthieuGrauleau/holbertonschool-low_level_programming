#include "main.h"

/**
 * _puts - entry point
 *
 * @str: string
 *
 * Description: prints a string
 *
 * Return: 0 for success.
 */

void _puts(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		_putchar(*str);
		index++;
	}
}
