#include "main.h"

/**
 * times_table - entry point
 *
 * Description: prints the 9 times table
 *
 * Return: 0 for success.
 */

void times_table(void)
{
	int n;
	int i;
	int result;
	
	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			result = n * i;
			return (result);
		}
	}
}	
