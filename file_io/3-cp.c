#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int open_file(const char *filename, int flags);
void close_file(int fd);
void copy_file_contents(int from_fd, int to_fd);

int main(int argc, char *argv[])
{
    int from_fd, to_fd;

    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    from_fd = open_file(argv[1], O_RDONLY);
    to_fd = open_file(argv[2], O_CREAT | O_WRONLY | O_TRUNC);

    copy_file_contents(from_fd, to_fd);

    close_file(from_fd);
    close_file(to_fd);

    return EXIT_SUCCESS;
}

int open_file(const char *filename, int flags)
{
    int fd = open(filename, flags, 0664);
    if (fd == -1)
    {
        fprintf(stderr, "Error: Can't open file %s\n", filename);
        exit(EXIT_FAILURE);
    }
    return fd;
}

void close_file(int fd)
{
    if (close(fd) == -1)
    {
        fprintf(stderr, "Error: Can't close file descriptor %d\n", fd);
        exit(EXIT_FAILURE);
    }
}

void copy_file_contents(int from_fd, int to_fd)
{
    ssize_t bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    while ((bytes_read = read(from_fd, buffer, BUFFER_SIZE)) > 0)
    {
        bytes_written = write(to_fd, buffer, bytes_read);
        if (bytes_written != bytes_read)
        {
            fprintf(stderr, "Error: Incomplete write to file\n");
            exit(EXIT_FAILURE);
        }
    }

    if (bytes_read == -1)
    {
        fprintf(stderr, "Error: Can't read from file\n");
        exit(EXIT_FAILURE);
    }
}
