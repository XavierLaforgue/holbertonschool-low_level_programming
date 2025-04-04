#include "main.h"
#define sizeof_buffer 1024
/**
 * err_fd_from - prints an error message when file could not be read
 * @fd_from: file descriptor of file to copy contents from
 * @b_cp_from: output of read from fd_from file
 * @fd_to: file descriptor of file to copy contents to
 * @filename: name of the file that could not be read
 * Return: nothing
 */

void err_fd_from(int fd_from, ssize_t b_cp_from, int fd_to, char *filename)
{
	if (fd_from == -1 || b_cp_from == -1)
	{
		close(fd_to);
		if (b_cp_from == -1)
			close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
}

/**
 * err_fd_to - prints an error message when file could not be written
 * @fd_to: file descriptor of file to copy contents to
 * @b_cp_to: output of write for fd_to
 * @fd_from: file descriptor of file to copy contents from
 * @fd_to_name: name of the file that could not be written
 * Return: nothing
 */

void err_fd_to(int fd_to, ssize_t b_cp_to, int fd_from, char *fd_to_name)
{
	if (fd_to == -1 || b_cp_to == -1)
	{
		close(fd_from);
		if (b_cp_to == -1)
			close(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fd_to_name);
		exit(99);
	}
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
 * error_args - prints error message when a wrong number of arguments is used
 * @err_true: logical operation that gives true if there was an error
 * Return: nothing
 */

void error_args(int err_true)
{
	if (!err_true)
		return;
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
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
	ssize_t b_cp_from = 1, b_cp_to = 1;
	char buff[sizeof_buffer];
	mode_t file_to_mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	error_args(argc != 3);
	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, file_to_mode);
	err_fd_from(fd_from, b_cp_from, fd_to, argv[1]);
	err_fd_to(fd_to, b_cp_to, fd_from, argv[2]);
	while (b_cp_from > 0)
	{
		b_cp_from = read(fd_from, buff, sizeof_buffer);
		err_fd_from(fd_from, b_cp_from, fd_to, argv[1]);
		b_cp_to = write(fd_to, buff, b_cp_from);
		err_fd_to(fd_to, b_cp_to, fd_from, argv[2]);
	}
	fd_from_close = close(fd_from);
	fd_to_close = close(fd_to);
	err_cannot_close(fd_from_close == -1, fd_from);
	err_cannot_close(fd_to_close == -1, fd_to);

	return (0);
}
