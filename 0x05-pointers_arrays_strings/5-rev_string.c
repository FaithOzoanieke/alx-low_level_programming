#include "main.h"

/**
 * rev_string - Reverses a string in a function.
 * @s: string to be reserved in a function.
 */

void rev_string(char *s)
{
	int uju = 0, len = 0;

	char tmp;

	while (s[uju++])
		len++;
	for (uju = len - 1; uju >= len / 2; uju--)
	{
		tmp = s[uju];
		s[i] = s[len - uju - 1];
		s[len - i - 1] = tmp;
	}
}
