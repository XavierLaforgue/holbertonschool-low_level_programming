#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the text file to be read
 * @letters: number of letters that should be read and printed
 * Return: actual number of letters that were read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buff;

	bytes_written = 0;
	bytes_read = 0;
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(letters * sizeof(char));
	if (!buff)
		return (0);
	bytes_read = read(fd, buff, letters);
	if (bytes_read == -1)
		return (0);
	bytes_written = write(STDOUT_FILENO, buff, bytes_read);
	free(buff);
	if (bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
