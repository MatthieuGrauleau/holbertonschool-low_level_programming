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
    int i, j, a, b, result;
    for (i = 0; i < n + 1; i++)
    {
        for (j = 0; j < n + 1; j++)
        {
          result = i * j;
	  a = result % 10;
	b = (result - a) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(result + '0');
	  _putchar(',');
	  _putchar(' ');
         }
     }
    _putchar('\n');
}
