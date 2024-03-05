#include "main.h"

/**
 * _strstr - function that locates a subtring
 *
 * @haystack: string the be search
 * @needle: substring to be found
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int index;
	int j;

	for (j = 0; needle[j] != '\0'; j++)
	{
		;
	}

	while (*haystack)
	{
		if (j > 0 && haystack[j - 1] == '\0')
		{
			return ('\0');
		}
		while (needle[index] != '\0' && haystack[index] == needle[index])
		{
			index++;
		}
		if (needle[index] == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
