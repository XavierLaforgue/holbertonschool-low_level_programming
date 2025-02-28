#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("s1 = %s\n", s1);
	printf("s2 = %s", s2);
	printf("s1 address = %p\n", s1);
	printf("s2 address = %p\n", s2);
	ptr = _strcat(s1, s2);
	printf("Without \'\\n\' printf s1 and s2 : %s", s1);
	printf("%s", s2);
	printf("New string : %s", ptr);
	return (0);
}
