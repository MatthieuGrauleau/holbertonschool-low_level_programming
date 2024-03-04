#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: memory destination
 * @src: source memory
 * @n: integer
 *
 * Return: a point to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (ptr);
}
