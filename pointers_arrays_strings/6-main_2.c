#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;
	char str2[] = "nothing interesting. hello!ah crazy {chorizo";

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s\n", str);

	ptr = cap_string(str2);
	printf("%s\n", str2);
    return (0);
}
