#include "main.h"

/**
 * puts_half - half of a string.
 * @str: string to be printed.
 */

void puts_half(char *str)
{
	int me = 0, len = 0, you;

	while (str[me++])
		len++;
	if ((len % 2) == 0)
		you = len / 2;
	else
		you = (len + 1) / 2;
	for (me = you; me < len; me++)
		_putchar(str[me]);
	_putchar('\n');
}
