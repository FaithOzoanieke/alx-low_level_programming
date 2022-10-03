#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in the memory.
 * @str: string.
 *
 * Return: pointer of an array of characters
 */

char *_strdup(char *str)
{
	char *result;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (result == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		result[j] = str[j];
	return (result);
}
