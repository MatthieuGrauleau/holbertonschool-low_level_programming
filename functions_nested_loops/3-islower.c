#include "main.h"

/**
 * islower - entry point
 *
 * Description: checks for lowercase character.
 *
 * Return: 0 for success.
 */

int _islower(int c)
{
	if ( c > 122 && c <= 98 )
	{ return (1);
	} {
		return (0);
	}
	_putchar('\n');
}

