#include "main.h"

int actual_prime(int num, int itr);
/**
 * is_prime_number - this says if an integer is a prime number or not
 * @num: number to evaluate
 *
 * Return: 1 if num is a prime number, 0 if not
 */

int is_prime_number(int num)
{
	if (num <= 1)
		return (0);
	return (actual_prime(num, num - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @num: the number to evaluate
 * @itr: this iterates
 *
 * Return: 1 if num is prime, 0 if not
 */
int actual_prime(int num, int itr)
{
	if (itr == 1)
		return (1);
	if (num % itr == 0 && itr > 0)
		return (0);
	return (actual_prime(num, itr - 1));
}
