#include "main.h"

/**
 * read_textfile - function that reads a text file and prints.
 *
 * @filename: pointer to the name of the file
 * @letters: nulber of letters.
 *
 * Return: if function fails or filename is NULL.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fo, fr, fw;
	char *buffer;

	if (!filename)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		return (0);
	}

	fo = open(filename, O_RDONLY);
	fr = read(fo, buffer, letters);
	fw = write(STDOUT_FILENO, buffer, fr);

	if (fo == -1 || fr == -1 || fw == -1 || fw != fr)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fo);
	return (fw);
}
