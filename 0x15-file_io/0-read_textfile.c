#include "holberton.h"

/**
 * read_textfile - Read a text file and print it to stdout
 * @filename: name of the file to print
 * @letters: number of letters that should be read and printed
 *
 * Return: number of bytes printed or 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes = 0, written;
	char *buffer = NULL;

	buffer = malloc(letters + 1);

	if (!filename || !buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes = read(fd, buffer, letters);
	if (bytes == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	written = write(STDOUT_FILENO, buffer, bytes);
	if (written != bytes)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);
	return (written);
}
