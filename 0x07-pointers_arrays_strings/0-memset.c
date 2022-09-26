#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed
 * pointed to by @s with the constant byte of @c.
 * @s: A pointer to the memory area to be filled.
 * @b: The character needed to fill the memory area with.
 * @n: The number of bytes that needs to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
