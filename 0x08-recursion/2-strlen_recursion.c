#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @str: string to calculate the length of
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + _strlen_recursion(str + 1));
}
