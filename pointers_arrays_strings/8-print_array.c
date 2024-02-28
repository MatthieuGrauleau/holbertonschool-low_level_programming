#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n ellements of an array
 *
 * @a: integer
 * @n: integer
 *
 * Return: 0 for success.
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
