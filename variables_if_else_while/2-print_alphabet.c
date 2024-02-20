#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  program that prints the alphabet in lowercase
 *
 * Return: Always 0 for success.
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
