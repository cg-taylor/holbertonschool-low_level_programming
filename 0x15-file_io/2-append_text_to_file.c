#include "holberton.h"

/**
 * _strlen - determine the number of bytes in a string
 * @string: the string to measure
 *
 * Return: the number of bytes in a string
 */

int _strlen(char *string)
{
	int count;

	for (count = 0; string[count]; count++)
		;

	return (count);
}

/**
 * append_text_to_file - Append text to the end of a file
 * @filename: the file to modify
 * @text_content: the text to add to the file
 *
 * Return: 1 if successful, -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int length;
	ssize_t bytes_written;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	length = _strlen(text_content);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	bytes_written = write(fd, text_content, length);
	if (bytes_written == -1)
		return (-1);

	close(fd);

	return (1);
}
