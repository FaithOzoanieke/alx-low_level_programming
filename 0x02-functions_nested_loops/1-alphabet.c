#include "main.h"
/**
 * print_alphabet - Print alphabet in lowercase with putchar
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char alphab = 'a';

	while (alphab <= 'z')
	{
		_putchar(alphab);
		alphab++;
	}
	_putchar('\n');
}
