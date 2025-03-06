#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = is_palindrome("level");
	printf("level is_palindrome :  %d\n", r);
	r = is_palindrome("le");
	printf("le is_palindrome :  %d\n", r);
	r = is_palindrome("");
	printf("empty string is_palindrome :  %d\n", r);
	r = is_palindrome("redder");
	printf("redder is_palindrome :  %d\n", r);
	r = is_palindrome("test");
	printf("test is_palindrome :  %d\n", r);
	r = is_palindrome("step on no pets");
	printf("step on no pets is_palindrome :  %d\n", r);

	return (0);
}
