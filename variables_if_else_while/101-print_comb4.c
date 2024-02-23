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
	int hundred;
	int ten;
	int unit;

	for (hundred = 0; hundred <= 7; hundred++)
	{
		for (ten = (hundred + 1); ten <= 8; ten++)
		{
			for (unit = (ten + 1); unit <= 9; unit++)
			{
				putchar(hundred + '0');
				putchar(ten + '0');
				putchar(unit + '0');
				if (hundred < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
