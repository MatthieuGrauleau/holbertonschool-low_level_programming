#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 *
 * Description: writs character
 *
 * Return: 1 for succes
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}       
