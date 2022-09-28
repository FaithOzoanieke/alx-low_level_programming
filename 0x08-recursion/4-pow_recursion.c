#include "main.h"

/**
 * _pow_recursion - returns the value of u raised to the power of f
 * @u: the value to raise
 * @f: raised to the power
 *
 * Return: the result of the power
 */

int _pow_recursion(int u, int f)
{
	if (f < 0)
		return (-1);
	if (f == 0)
		return (1);
	return (u * _pow_recursion(u, f - 1));
}
