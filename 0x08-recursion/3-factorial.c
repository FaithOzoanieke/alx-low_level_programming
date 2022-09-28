#include "main.h"

/**
 * factorial - to returns the factorial of a number
 * @num: number to return the factorial from
 *
 * Return: factorial of n
 */

int factorial(int num)
{
	if (num < 0)
		return (-1);
	if (num == 0)
		return (1);
	return (num * factorial(num - 1));
}
