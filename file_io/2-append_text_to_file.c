#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to which text will be appended
 * @text_content: text to append to the end of the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t text_len;
	ssize_t b_written;

	if (filename == NULL)
		return (-1);
	if (!text_content)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	text_len = 0;
	while (text_content[text_len] != '\0')
		++text_len;
	b_written = write(fd, text_content, text_len);
	close(fd);
	if (b_written == -1)
		return (-1);
	return (1);
}
