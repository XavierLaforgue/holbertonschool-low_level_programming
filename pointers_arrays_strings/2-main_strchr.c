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
	char *s = "hello";
	char *f;
	char *f_test;
	char *test = "the day the world stopped spinning";
	char character = '\0';

	f = _strchr(s, 'l');
	f_test = _strchr(test, character);
	if (f_test == NULL)
		printf("Didn\' find the character %c in string \"%s\"\n", character, test);
	else
		printf("FOUND: \"%s\"\n", f_test);
	f_test = strchr(test, character);
	if (f_test == NULL)
		printf("Standard strchr didn\' find \"%c\" in \"%s\"\n", character, test);
	else
		printf("Standrad strchr FOUND: \"%s\"\n", f_test);
	if (f != NULL)
	{
		printf("Example result: %s\n", f);
	}
	return (0);
}
