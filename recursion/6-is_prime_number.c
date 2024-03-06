#include "main.h"

/**
 * is_prime_number_helper - function that found if n is a prime number
 *
 * @n: integer
 * @i: number
 *
 * Return: 0 if it divisible
 * 1 if not
 */

int is_prime_number_helper(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i == n / 2)
		return (1);
	return (is_prime_number_helper(n, i + 1));
}

/**
 * is_prime_number - checkif a number is prime
 *
 * @n: number to check
 *
 * Return: 0 if its not primer
 * 1 if is prime
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);
	return (is_prime_number_helper(n, i));
}
