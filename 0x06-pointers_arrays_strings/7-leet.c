#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *str)
{
	int ind1 = 0, ind2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[ind1])
	{
		for (ind2 = 0; ind2 <= 7; ind2++)
		{
			if (str[ind1] == leet[ind2] ||
			    str[ind1] - 32 == leet[ind2])
				str[ind1] = ind2 + '0';
		}
		ind1++;
	}
	return (str);
}
