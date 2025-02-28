#include "main.h"

/**
 * leet - encodes a string into simplified leet
 * @str: string to be encoded
 *
 * Return: encoded string
 */

char *leet(char *str)
{
	char elite[5] = {'a', 'e', 'o', 't', 'l'};
	char ELITE[5] = {'A', 'E', 'O', 'T', 'L'};
	char leet[5] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; str[i] != '\0'; ++i)
	{
		for (j = 0; j < 5; ++j)
		{
			if (str[i] == elite[j] || str[i] == ELITE[j])
			{
				str[i] = leet[j];
			}
		}
	}
	return (str);
}
