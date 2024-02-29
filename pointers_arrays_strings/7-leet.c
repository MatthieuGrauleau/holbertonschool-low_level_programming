#include "main.h"

/**
 * leet - write a function that encodes a string into 1337
 *
 * @str: string
 *
 * Return: 0 for success.
 */

char *leet(char *str)
{
	char *ptr = str;
	int index1;
	char leet[] = "aAeEoOtTlL";
	char newleet[] = "4433007711";

	while (*ptr)
	{
		for (index1 = 0; leet[index1]; index1++)
		{
			if (*ptr == leet[index1])
			{
				*ptr = newleet[index1];
			}
		}
		ptr++;
	}
	return str;
}
