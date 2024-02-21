#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - entry point
 *
 * @n: number
 *
 * Description: prints all natural numbers from n to 98, followed by a new line
 *
 * Return: 0 for success.
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			if (n > 98)
			{
			printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
			n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			if (n < 98)
			{
			printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
			n++;
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}
