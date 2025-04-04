#include "main.h"

/**
 * err_cannot_read - prints an error message when file could not be read
 * @err_true: logical operation that gives true if there was an error and
 * false otherwise
 * @filename: name of the file that could not be read
 * Return: nothing
 */

void err_cannot_read(int err_true, char *filename)
{
	if (!err_true)
		return;
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * err_cannot_write - prints an error message when file could not be read
 * @err_true: logical operation that gives true if there was an error and
 * false otherwise
 * @filename: name of the file that could not be read
 * Return: nothing
 */

void err_cannot_write(int err_true, char *filename)
{
	if (!err_true)
		return;
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * err_cannot_close - prints an error message when file descriptor could not
 * be closed
 * @err_true: logical operation that gives true if there was an error and
 * false otherwise
 * @fd: filedescriptor of the file that could not be closed
 * Return: nothing
 */

void err_cannot_close(int err_true, int fd)
{
	if (!err_true)
		return;
	dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
	exit(100);
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, fd_to_close, fd_from_close;
	ssize_t b_cp_from, b_cp_to;
	char buff[1024];
	mode_t file_to_mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, file_to_mode);
	err_cannot_write(fd_to == -1, argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	err_cannot_read(fd_from == -1, argv[1]);
	while (b_cp_from > 0)
	{
		b_cp_from = read(fd_from, buff, sizeof(buff));
		err_cannot_read(b_cp_from == -1, argv[1]);
		b_cp_to = write(fd_to, buff, b_cp_from);
		err_cannot_write(b_cp_to == -1, argv[2]);
	}
	fd_from_close = close(fd_from);
	err_cannot_close(fd_from_close == -1, fd_from);
	fd_to_close = close(fd_to);
	err_cannot_close(fd_to_close == -1, fd_to);

	return (0);
}
