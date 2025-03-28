#include <stdio.h>

/**
 * main - print the numbers from 1 to 100, followed by a new line.
 * However, for
 * multiples of three print Fizz instead of the number and for the multiples of
 * five print Buzz. For numbers which are multiples of both three and five
 * print FizzBuzz.
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; ++i)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
				printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
		putchar(' ');
		}
		else
			printf("%d ", i);
	}
	printf("Buzz");
	putchar('\n');
	return (0);
}
