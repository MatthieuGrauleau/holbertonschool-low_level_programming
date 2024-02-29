#include "main.h"

/**
 *
 *
 *
 */

char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == ' ')
		{
			i++;

			if (a[i] >= 97 && a[i] <= 122)
			{
				a[i] -= 32;
			}
		}
	}
	return (a);
}
