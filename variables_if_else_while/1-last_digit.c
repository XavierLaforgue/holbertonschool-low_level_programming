#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - assign a random number to the variable n each time it is executed and
 * print the last digit stored in n
 *
 * Return: 0
 */

int main(void)
{
	int n, nmod10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	nmod10 = n % 10;
	printf("Last digit of %d is %d and is ", n, nmod10);
	if (nmod10 == 0)
		printf("0\n");
	else if (nmod10 < 6)
		printf("less than 6 and not 0\n");
	else if (nmod10 > 5)
	printf("greater than 5\n");

	return (0);
}
