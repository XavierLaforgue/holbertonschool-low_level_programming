#ifndef MAIN_H
#define MAIN_H

#include <sys/stat.h> /* for S_IRUSR and S_IWUSR */
#include <sys/types.h> /* ssize_t */
#include <unistd.h> /* read, write */
#include <stdio.h> /* printf */
#include <fcntl.h> /* open */
#include <stdlib.h> /* malloc */

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif
