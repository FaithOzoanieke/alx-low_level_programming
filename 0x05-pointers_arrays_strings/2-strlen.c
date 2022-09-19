#include "main.h"
/**
 * _strlen - A funtion to return the length of a string
 * @str: string
 *
 * Return: len
 */

length_size _ien(const char *str)
{
	length_size len = 0;
	
	while (*str++)
		len++;
	return (len);
}
