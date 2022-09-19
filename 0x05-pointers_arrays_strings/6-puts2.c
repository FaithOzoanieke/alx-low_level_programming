#include "main.h"

/**
 * puts2 - Prints one char out of two from a string.
 * @str: The string containing string of characters.
 */

void puts2(char *str)
{
	int uju = 0, len = 0;

	while (str[uju++])
		len++;
	for (uju = 0; uju < len; uju += 2)
		_putchar(str[uju]);
	_putchar('\n');
}
