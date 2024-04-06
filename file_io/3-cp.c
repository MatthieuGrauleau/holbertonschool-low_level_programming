#include "main.h"

char *initial_buffer(char *file);
void close_file(int fd);

/**
 * initial_buffer - function that allocates 1024 bytes.
 * @file: name of the file.
 *
 * Return: the buffer.
*/

char *initial_buffer(char *file)
{
	char *buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - function that close the file
 * @fd: file descriptor to be closed.
*/

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copie the content to a file to an other file.
 *
 * @argc: num of args
 * @argv: arry of args
 *
 * Return: 0 for success.
*/

int main(int argc, char *argv[])
{
	int from, to, fr, fw;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = initial_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC,
	S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		exit(99);
	}
	while ((fr = read(from, buffer, 1024)) > 0)
	{
		fw = write(to, buffer, fr);
		if (fw == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
	}

	if (fr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
