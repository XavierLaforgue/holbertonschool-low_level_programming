#ifndef MAIN_H
#define MAIN_H

#include <unistd.h> /* ssize_t */
#include <stdio.h> /* printf */
#include <fcntl.h> /* open */
#include <stdlib.h> /* malloc */

ssize_t read_textfile(const char *filename, size_t letters);

#endif
