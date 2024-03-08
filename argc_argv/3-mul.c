#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - function that prints its name
 * @argc: function
 * @argv: tableau
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum *= atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
