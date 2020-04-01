#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

#define PERMISSION S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH

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
	ssize_t bytes_read, bytes_write;
	char buffer[1024];

/* make sure we have the right number of arguments */
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

/* open both files */
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd_to = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, PERMISSION);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

/* Read fd_from and then write to fd_to before reading again */

	do {
		bytes_read = read(fd_from, buffer, 1024);
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}

		bytes_write = write(fd_to, buffer, bytes_read);
		if (bytes_write < bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	} while (bytes_read == 1024);


/* close returns 0 if it succeeds, -1 if it fails */
	if (close(fd_from))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_from);
		exit(100);
	}

	if (close(fd_to))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_to);
		exit(100);
	}

	return (0);
}
