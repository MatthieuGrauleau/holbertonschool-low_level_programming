#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 *
 * @argc: function
 * @argv: array
 *
 * Return: 0 for success.
 */

int main(int argc, char *argv[])
{
	if (argv)
		printf("%d\n", argc - 1);
	return (0);
}
