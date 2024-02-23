#include "main.h"

/**
 * times_table - entry point
 *
 * Description: prints the 9 times table
 *
 * Return: 0 for success.
 */

void print_times_table(int n)
{
int r;
int result;
int c;
int a;
int b;
int t;
int rest;

	if (n < 15 || n > 0)
	{
	for (c = 0; c <= n; c++)
	{
		for (r = 0; r <= n; r++)
		{
			result = c * r;
			if (result > 99)
			{
				t = result / 100;
				rest = result % 100;
				b = rest % 10;
                        	a = rest  / 10;
				_putchar(44);
                        	_putchar(32);
                        	_putchar(32);
				_putchar(t + '0');
                        	_putchar(a + '0');
                        	_putchar(b + '0');
			if (result > 9)
			{
			b = result % 10;
			a = (result - b) / 10;
			_putchar(44);
			_putchar(32);
			_putchar(32);
			_putchar(a + '0');
			_putchar(b + '0');
			}
			else
			{
			if (r != 0)
				{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(32);
				} 
			_putchar(result + '0');
			}
		}
		_putchar('\n');
	}
	}
	else
	{
	}
}
