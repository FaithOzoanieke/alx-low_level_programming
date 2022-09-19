#include "main.h"

/**
 * rev_string - Reverses a string in a function.
 * @s: string to be reserved in a function.
 */

void rev_string(char *s)
{
	int u = 0, len = 0;

	char tmp;

	while (s[u++])
		len++;
	for (u = len - 1; u >= len / 2; u--)
	{
		tmp = s[u];
		s[u] = s[len - u - 1];
		s[len - u - 1] = tmp;
	}
}
