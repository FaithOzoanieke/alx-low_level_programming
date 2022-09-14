#include "main.h"
/**
 * print lowercase alphabet 10 times
 * Description: You are not allowed to include standard libraries
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n);
		i++;
	}
}
