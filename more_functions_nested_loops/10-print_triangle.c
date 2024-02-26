#include "main.h"

/**
 * print_triangle - entry point
 *
 * Descrition: prints a triangle, followed by a new line
 *
 * Return: 0 for success.
 */

void print_triangle(int size)
{
	int count;
	int space;

	if (size > 0)
	{
		for (count = 0; count < size; count++)
		{
			for (space = space - size; size >= 0 space--)
			{
				_putchar(' ');
			}
			for (space = 0; space <= count; space++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
