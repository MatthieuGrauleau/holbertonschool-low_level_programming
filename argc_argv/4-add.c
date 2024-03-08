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
	int j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
