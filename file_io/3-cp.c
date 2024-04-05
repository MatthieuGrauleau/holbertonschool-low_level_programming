#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int open_file(const char *filename, int flags);
void close_file(int fd);
void copy_file(const char *file_from, const char *file_to);

/**
 * main - Entry point. Copies the content of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, or the appropriate exit code on failure.
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        return 97;
    }

    copy_file(argv[1], argv[2]);

    return 0;
}

/**
 * open_file - Opens a file and returns the file descriptor.
 * @filename: The name of the file to open.
 * @flags: The flags to use when opening the file.
 *
 * Return: The file descriptor on success, or -1 on failure.
 */
int open_file(const char *filename, int flags)
{
    int fd = open(filename, flags, 0664);
    if (fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
        exit(98);
    }
    return fd;
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to close.
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
 * copy_file - Copies the content of one file to another.
 * @file_from: The name of the source file.
 * @file_to: The name of the destination file.
 */
void copy_file(const char *file_from, const char *file_to)
{
    int from_fd, to_fd;
    ssize_t bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    from_fd = open_file(file_from, O_RDONLY);
    to_fd = open_file(file_to, O_CREAT | O_WRONLY | O_TRUNC);

    while ((bytes_read = read(from_fd, buffer, BUFFER_SIZE)) > 0)
    {
        bytes_written = write(to_fd, buffer, bytes_read);
        if (bytes_written != bytes_read)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
            close_file(from_fd);
            close_file(to_fd);
            exit(99);
        }
    }

    if (bytes_read == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        close_file(from_fd);
        close_file(to_fd);
        exit(98);
    }

    close_file(from_fd);
    close_file(to_fd);
}
