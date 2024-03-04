#include "main.h"

/**
 * _memset - function hat fills memory with a constant byte
 *
 * @s: an adress
 * @b: constant byte
 * @n: integrer
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (ptr);
}
