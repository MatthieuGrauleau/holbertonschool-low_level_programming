#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: This program will assign a random number to the variable n
 *
 * Return: Always 0 for success.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d", n);
	if (n > 0)
	{
		printf(" is positive\n");
	} else if (n == 0)
	{
		printf(" is zero\n");
	} else
	{
		printf(" is negative\n");
	}
	return (0);
}
