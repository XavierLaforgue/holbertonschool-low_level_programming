#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: text to be written into the file (NULL-terminated string)
 * Return: 1 in success, -1 on failure (can not be created or written on)
 *
 * Description:
 * Permissions for the createed file: "rw-------", same if already exists.
 * Truncate if already exists.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t text_len;
	ssize_t bytes_written;

	if (!filename)
	{
		printf("no filename\n");
		return (-1);
	}
	if (!text_content)
	{
		printf("text_content is empty\n");
		text_content = "";
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		printf("did not open file\n");
		return (-1);
	}
	printf("File descriptor: %i / File name: %s\n", fd, filename);
	text_len = 0;
	while (text_content[text_len] != '\0')
		++text_len;
	bytes_written = write(fd, text_content, text_len);
	if (bytes_written == -1)
	{
		close(fd);
		printf("did not write in file\n");
		return (-1);
	}
	close(fd);

	return (1);
}
