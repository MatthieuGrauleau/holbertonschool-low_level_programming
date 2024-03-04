#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of a bytes
 *
 * @s: string searched
 * @accept: the set of bytes
 *
 * Return: a pointer to ther byte in s that matches ones
 * of the bytes in accept or null if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int index;
	char *ptr = s;

	while (*ptr)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*ptr == accept[index])
			{
				return (ptr);
			}
		}

		ptr++;
	}

	return ('\0');
}
