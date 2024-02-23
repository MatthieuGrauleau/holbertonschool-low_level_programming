#include "main.h"

/**
 * times_table - entry point
 *
 * Description: prints the 9 times table
 *
 * Return: 0 for success.
 */

int times_table(num)
{
    int i, j, a, b, result;
    for (i = 0; i < num + 1; i++)
    {
        for (j = 0; j < num + 1; j++)
        {
          result = i * j;
	  a = result % 10;
	b = (result - a) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(b + '0');
	_putchar(a + '0');
	  _putchar(",");
	  _putchar(" ");
            }
        }
        printf("\n");
    }
    return (0);
}
