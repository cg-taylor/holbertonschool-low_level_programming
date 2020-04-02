#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

#define PERMISSION (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)


/**
 * error_98 - test that fd_from opened properly
 * @fd_from: a file descriptor
 * @filename: the name of the file
 *
 * Return: void
 */

void error_98(int fd_from, char *filename)
{
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
}

/**
 * error_99 - test that fd_to opened and is written to properly
 * @fd_to: a file descriptor
 * @b_write: the number of bytes written by the last call to write
 * @b_read: the number of bytes read by the last call to read
 * @filename: the name of the file
 *
 * Return: void
 */

void error_99(int fd_to, ssize_t b_write, ssize_t b_read, char *filename)
{
	if (fd_to == -1 || b_write < b_read)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * close_files - close file descriptors
 * @fd: a file descriptor
 *
 * Return: void
 */

void close_files(int fd)
{
	if (close(fd))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}

/**
 * main - copy the contents of one file to another
 * @ac: the number of command line arguments
 * @av: double pointer to the array containing the command line arguments
 *
 * Return: 0 if successful
 *    exit with one of the following if it fails:
 *         97 - program was not run with the correct command line arguments
 *         98 - file does not exist or cannot be read
 *         99 - file cannot be created or written
 *         100 - file descriptor cannot be closed
 */

int main(int ac, char **av)
{
	int fd_from, fd_to;
	ssize_t bytes_read = 0, bytes_write = 0;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	error_98(fd_from, av[1]);

	fd_to = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, PERMISSION);
	error_99(fd_to, bytes_write, bytes_read, av[2]);

	do {
		bytes_read = read(fd_from, buffer, 1024);
		error_98(fd_from, av[1]);

		bytes_write = write(fd_to, buffer, bytes_read);
		error_99(fd_to, bytes_write, bytes_read, av[2]);
	} while (bytes_read == 1024);

	close_files(fd_from);
	close_files(fd_to);

	return (0);
}
