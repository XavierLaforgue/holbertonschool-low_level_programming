#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack bauer, starting from
 * 00:00 to 23:59
 *
 * Return: Always 0
 */

void jack_bauer(void)
{
	int min_d1, min_d2, min_d2_max, sec_d1, sec_d2;

	for (min_d1 = 0; min_d1 <= 2; ++min_d1)
	{
		if (min_d1 < 2)
			min_d2_max = 9;
		else
			min_d2_max = 3;
		for (min_d2 = 0; min_d2 <= min_d2_max; ++min_d2)
		{
			for (sec_d1 = 0; sec_d1 < 6; ++sec_d1)
			{
				for (sec_d2 = 0; sec_d2 <= 9; ++sec_d2)
				{
					_putchar('0' + min_d1);
					_putchar('0' + min_d2);
					_putchar(':');
					_putchar('0' + sec_d1);
					_putchar('0' + sec_d2);
					_putchar('\n');
				}
			}
		}
	}
}
