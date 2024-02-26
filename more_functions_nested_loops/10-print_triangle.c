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
			_putchar('#');
		}
	}
	_putchar('\n');
}
