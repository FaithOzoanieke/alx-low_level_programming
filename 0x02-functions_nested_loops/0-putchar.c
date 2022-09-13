#include "main.h"
/**
 * main - Print "_putchar" followed by a new line.
 *
 * Return: 0 if successful
 *
 */
int main(void)
{
	char a[] = "_putchar";
	int i = 0;

	while (a[i] != '\0')
	{
		_putchar(a[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
