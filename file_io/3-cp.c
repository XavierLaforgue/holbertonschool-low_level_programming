#include "main.h"
#define sizeof_buffer 1024

/**
 * error_args - prints error message when a wrong number of arguments is used
 * @err_true: logical operation that gives true if there was an error
 * Return: nothing
 */

void error_args(int err_true)
{
	if (err_true)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

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
		if (fd_to != -1)
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
		if (fd_from != -1)
			close(fd_from);
		if (b_cp_to == -1)
			close(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fd_to_name);
		exit(99);
	}
}

/**
 * close_fd - closes two files if they are open and prints an error message if
 * it fails to close them
 * @fd_from: file descriptor of first file to close
 * @fd_to: filedescriptor of second file to close
 * Return: nothing
 */

void close_fd(int fd_from, int fd_to)
{
	ssize_t fd_from_close, fd_to_close;

	if (fd_from != -1)
		fd_from_close = close(fd_from);
	if (fd_to != -1)
		fd_to_close = close(fd_to);
	if (fd_from_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_from);
		exit(100);
	}
	if (fd_to_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_to);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t b_cp_from = 1, b_cp_to = 1;
	char buff[sizeof_buffer];
	mode_t file_to_mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	error_args(argc != 3);
	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, file_to_mode);
	err_fd_from(fd_from, b_cp_from, fd_to, argv[1]);
	err_fd_to(fd_to, b_cp_to, fd_from, argv[2]);
	while (b_cp_from > 0 && b_cp_to > 0)
	{
		b_cp_from = read(fd_from, buff, sizeof_buffer);
		err_fd_from(fd_from, b_cp_from, fd_to, argv[1]);
		b_cp_to = write(fd_to, buff, b_cp_from);
		err_fd_to(fd_to, b_cp_to, fd_from, argv[2]);
	}
	close_fd(fd_from, fd_to);

	return (0);
}
