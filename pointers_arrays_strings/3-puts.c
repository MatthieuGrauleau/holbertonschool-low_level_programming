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

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
