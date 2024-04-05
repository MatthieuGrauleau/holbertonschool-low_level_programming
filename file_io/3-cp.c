#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"


#define BUFFER_SIZE 1024


/**
 * open_target_file - Opens the target file with appropriate permissions
 * @target: Name of the target file
 * Return: File descriptor of the target file, or -1 on failure
 */
int open_target_file(const char *target)
{
	int target_fd;

	target_fd = open(target, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
	| S_IWUSR | S_IRGRP | S_IROTH);
	if (target_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", target);
	return (target_fd);
}

/**
 * copy_file - function that copies the content of a file to an other
 * @source: Name of the source file
 * @target: name of the target file
 * Return: 0 for success and 1 on failure
*/

int copy_file(const char *source, const char *target)
{
	int source_fd, target_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	source_fd = open(source, O_RDONLY);
	if (source_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
		return (1);
	}
	target_fd = open_target_file(target);
	if (target_fd == -1)
	{
		close(source_fd);
		return (1);
	}
	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(target_fd, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", target);
			close(source_fd);
			close(target_fd);
			return (1);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
		close(source_fd);
		close(target_fd);
		return (1);
	}
	if (close(source_fd) == -1 || close(target_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptors\n");
		return (1);
	}
	return (0);
}

/**
 * main - Entry point
 * @ac: Argument count
 * @av: Argument vector
 * Return: 0 for success and 1 on failure
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	return (copy_file(av[1], av[2]));
}
