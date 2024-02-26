#include "main.h"

/**
 * more_numbers - entry point
 *
 * Description: prints 10 times the numbers
 *
 * Return: 0 for success.
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
