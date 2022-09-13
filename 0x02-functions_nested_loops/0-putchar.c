#include "main.h"
/**
 * main - Prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[] = "_putchar";
	int b;

	for (b = 0; b < a; b++)
	{
		_putchar(a[b]);
	}
	_putchar('\n');

	return (0);
}
