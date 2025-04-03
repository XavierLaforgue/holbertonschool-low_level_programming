#ifndef MAIN_H
#define MAIN_H

#include <stdio.h> /* for printf and NULL */
#include <stdlib.h> /* for exit, malloc and free (and NULL)*/
#include <unistd.h> /* for write */

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);

#endif
