#include "main.h"

int actual_sqrt_recursion(int uju, int faith);

/**
 * _sqrt_recursion - this returns the natural square root of a number
 * @uju: the number to calculate the square root of
 *
 * Return: the resulting square root
 */

int _sqrt_recursion(int uju)
{
	if (uju < 0)
		return (-1);
	return (actual_sqrt_recursion(uju, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @uju: the number to calculate the sqaure root of
 * @faith: the iterator
 *
 * Return: the resulting square root
 */

int actual_sqrt_recursion(int uju, int faith)
{
	if (faith * faith > uju)
		return (-1);
	if (faith * faith == uju)
		return (faith);
	return (actual_sqrt_recursion(uju, faith + 1));
}
