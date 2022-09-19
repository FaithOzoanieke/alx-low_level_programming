#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: string to tbe reserved.
 */

void print_rev(char *s)
{
	int len = 0, h = 0;

	while (s[h++])
		len++;

	for (h = len - 1; h >= 0; h--)
		_putchar(s[h]);

	_putchar('\n');
}
