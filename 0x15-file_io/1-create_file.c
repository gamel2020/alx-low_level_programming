#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
	i++;
	return (i);
}

/**
 * create_file - creates a file with the specified name.
 *
 * @filename: The name of the file to create.
 * @text_content: text to write
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	return (-1);

	if (text_content)
	{
	bytes = write(fd, text_content, len);
	if (bytes == -1)
	{
		close(fd);
		return (-1);
	}
	}

	close(fd);
	return (1);
}
