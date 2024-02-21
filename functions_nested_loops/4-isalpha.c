#include "main.h"

/**
 * _isalpha - return 1 if c is a letter lower or uppercaser otherwise 0
 *
 * @c: this character is in ASCII
 *
 * Description: that checks for alphabetic character.
 *
 * Return: 0 for success.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{ return (1);
	} {
		return (0);
	}
	_putchar('\n');
}
