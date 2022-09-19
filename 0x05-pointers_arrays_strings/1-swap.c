#include "main.h"
/**
 * swap_int - swap the value of two integer
 * @a: first int value to swap
 * @b: second int value to swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
