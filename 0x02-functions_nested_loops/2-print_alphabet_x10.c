#include "main.h"
/**
 * print lowercase alphabet 10 times
 * Description: You are not allowed to include standard libraries
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int alphab = 0;
	char anested;

	while (alphab < 10)
	{
		anested = 'a';
		while (anested <= 'z')
		{
			_putchar(anested);
			anested++;
		}
		_putchar('\n');
		alphab++;
	}
}
