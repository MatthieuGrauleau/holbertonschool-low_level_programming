#include "main.h"

/**
 * cap_string - capitalize all word of a string
 *
 * @a: string
 *Return: 0 for success.
 */

char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == ' ' ||
			a[i] == '\t' ||
			a[i] == '\n' ||
			a[i] == ',' ||
			a[i] == ';' ||
			a[i] == '.' ||
			a[i] == '!' ||
			a[i] == '?' ||
			a[i] == '"' ||
			a[i] == '(' ||
			a[i] == ')' ||
			a[i] == '{' ||
			a[i] == '}')
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
