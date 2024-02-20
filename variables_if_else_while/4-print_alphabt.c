#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase
 *
 * Return: 0 for success.
 */

int main (void)
{
	char alphabet = 'a';

	while (alphabet <= 'd')
	{
		putchar(alphabet);
		alphabet++;
	}

	alphabet = 'f';

	while (alphabet <= 'p')
	{
		putchar(alphabet);
		alphabet++;
	}

	alphabet = 'r';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');
	return (0);
}
