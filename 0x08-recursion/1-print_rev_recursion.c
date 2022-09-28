#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @str: the string to print
 */

void _print_rev_recursion(char *str)
{
	if (*str)
	{
		_print_rev_recursion(str + 1);
		_putchar(*str);
	}
}
