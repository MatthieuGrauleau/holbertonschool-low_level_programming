#include "main.h"

/**
 * _strspn - function that gets the length of a prefic substring
 *
 * @s: string to be search
 * @accept: prefix that we wich the lenght
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	char *ptr = s;
	unsigned int bytes = 0;
	int index;

	while (*ptr)
	{	
		for (index = 0; accept[index]; index++)
		{
			if (*ptr == accept[index])
			{
				bytes++;
				break;
			}

			if (accept[index + 1] == '\0')
			{
				return (bytes);
			}
		}
		ptr++;
	}
	return (bytes);
}
