#include "main.h"
/**
 * main - Print "_putchar" followed by a new line.
 *
 * Return: 0 if successful
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

	return(0);
}
