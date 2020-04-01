#include "holberton.h"

/**
 * _strlen - determine the number of bytes in a string
 * @str: the string to measure
 *
 * Return: number of bytes in the string
 */

int _strlen(char *str)
{
	int count;

	for (count = 0; str[count]; count++)
		;

	return (count);
}

/**
 * create_file - create a file
 * @filename: name of the file to create
 * @text_content: contents of the file to create
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, length;
	ssize_t bytes_written;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	length = _strlen(text_content);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);

	bytes_written = write(fd, text_content, length);
	if (bytes_written < length)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
