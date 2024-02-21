#include "main.h"

/**
 * _islower - entry point
 *
 * @c: this character is in ASCII
 *
 * Description: checks for lowercase character.
 *
 * Return: 0 for success.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{ return (1);
	} {
		return (0);
	}
	_putchar('\n');
}

