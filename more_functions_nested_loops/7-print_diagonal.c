#include "main.h"

/**
 * print_diagonal - entry point
 *
 * @n: number
 *
 * Description: draws a diagonal line on the terminal
 *
 * Return: 0 for success.
 */

void print_diagonal(int n)
{
	int count;
	int space;

	if (n > 0)
	{
		for (count = 1; count < n; count++)
		{
			for (space = 0; space < count; space++)
			{
				if (space != 0)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	} {
		_putchar('\n');
	}
}

