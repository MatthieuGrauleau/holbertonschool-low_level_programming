#include "main.h"

/**
 * flipt_bits - function that returns the number of bits you would
 * need to flip to get from one number to another.
 *
 * @n: number.
 * @m: index.
 *
 * Return: the number of bits.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int compar = n ^ m;
	unsigned long int bytes = 0;

	while (compar > 0)
	{
		bytes += (compar & 1);
		compar >>= 1;
	}
	return (bytes);
}
