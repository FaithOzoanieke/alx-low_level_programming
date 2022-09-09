#include <stdio.h>
/**
 * main - A program that prints alphabets in reverse order
 *
 * Return: 0 on success
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
