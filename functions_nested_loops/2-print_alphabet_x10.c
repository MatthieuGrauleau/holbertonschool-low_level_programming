#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x 10
 *
 * Description: print 10 times the alphabet
 *
 * Return: 0 for success.
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
