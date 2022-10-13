#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters passed
 * @n: number of arguments passed to the function in the program
 *
 * Return: the resulting sum in the program
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
