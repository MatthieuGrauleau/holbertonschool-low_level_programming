#include <stdio.h>

/**
 * main - function that prints its name
 * @argc: function
 * @argv: tableau
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
