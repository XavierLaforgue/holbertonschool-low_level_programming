#include "main.h"

/**
 * main - checks for lowercase character
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');

    return (0);
}
