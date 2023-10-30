#include "main.h"

/**
 * read_textfile - reads text from a file and prints it
 * @filename: name of file to read
 * @letters: number of bytes to read
 *
 * Return: number bytes read/printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int kd;
	size_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	kd = open(filename, O_RDONLY);
	if (kd == -1)
		return (0);
	bytes = read(kd, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(kd);
	return (bytes);
}
