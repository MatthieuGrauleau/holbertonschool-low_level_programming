#include "main.h"

/**
 * print_square - entry poinit
 *
 * @size: number
 *
 * Description: prints a square, followed by a new line.
 *
 * Return: 0 for success.
 */

void print_square(int size)
{
	int count;
	int space;

	if (size > 0)
	{
		for (count = 0; count < size; count++)
		{
			for (space = 0; space < size; space++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
