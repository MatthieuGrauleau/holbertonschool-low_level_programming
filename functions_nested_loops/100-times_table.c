#include "main.h"

/**
 * times_table - entry point
 *
 * Description: prints the 9 times table
 *
 * Return: 0 for success.
 */

int times_table(int n)
{
	int i;
	int result;
	int a;
	int b;

	if ( n > 15 && n < 0)
	{
	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			result = n * i;
			if (result > 9)
			{
				a = result % 10;
				b = (result - a) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(b + '0');
				_putchar(a + '0');
			} else
			{
				if (i != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				 _putchar(result + '0');
			}
		}
		 _putchar('\n');
	}
	}
}
