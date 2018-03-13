#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: name of the file
 * @letters: number of letters
 * Return: if success return number of letter, else return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
		return (0);

	buffer[letters + 1] = '\0';
	close(fd);

	bytes_written = write(STDIN_FILENO, buffer, bytes_read);
	if (bytes_written == -1)
		return (0);

	free(buffer);

	return (bytes_read);
}
