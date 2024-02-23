#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible different combinations of two digits
 *
 * Return: 0 for success.
 */

int main(void)
{
	int first, second;

	for (first = 0; first <= 99; first++)
	{
		for (second = (first + 1); second <= 99; second++)
		{
			putchar((first / 10) + '0');
			putchar((first % 10) + '0');
			putchar(' ');
			putchar((second / 10) + '0');
			putchar((second % 10) + '0');
			if (first < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
