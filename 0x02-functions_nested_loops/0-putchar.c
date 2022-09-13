#include "main.h"
/**
 * main - Prints putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char uju[] = "_putchar";
	int i = 0;

	while (uju[i] != '\0')
	{
		_putchar(uju[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
