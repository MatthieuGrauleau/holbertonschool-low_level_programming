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
    int i, j, result, a, b;
    for (i = 0; i < n + 1; i++)
    {
        for (j = 0; j < n + 1; j++)
        {
          result = i * j;
	  if (result > 9)
			{
				a = result % 10;
				b = (result - a) / 10;
				_putchar(b + '0');
				_putchar(a + '0');
				_putchar(',');
                 _putchar(' ');
                 _putchar(' ');
                 _putchar(' ');
			}else if ( j < n)
			{

	  _putchar(result + '0');
	  _putchar(',');
                 _putchar(' ');
                 _putchar(' ');
                 _putchar(' ');
			}
 	}
	_putchar('\n');
     }

}
