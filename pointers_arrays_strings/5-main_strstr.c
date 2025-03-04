#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;
	char *found;
	char *s_test = "the day the world stopped spinning";
	char *f_test = "\0";

	t = _strstr(s, f);
	printf("%s\n", t);

	found = _strstr(s_test, f_test);
	printf("FOUND: \"%s\"\n", found);

	found = strstr(s_test, f_test);
	printf("Standard function found: \"%s\"\n", found);
	return (0);
}
