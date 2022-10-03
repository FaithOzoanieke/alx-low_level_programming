#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: The size of the array.
 * @s: The storaged char
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char s)
{
	char *uju;
	unsigned int i;

	if (size == 0)
		return (NULL);
	uju = malloc(sizeof(s) * size);
	if (uju == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		uju[i] = s;
	return (uju);
}
