#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @f1: first string.
 * @f2: second string.
 *
 * Return: pointer of an array of chars
 */

char *str_concat(char *f1, char *f2)
{
	char *result;
	unsigned int i, j, k, limit;

	if (f1 == NULL)
		f1 = "";
	if (f2 == NULL)
		f2 = "";
	for (i = 0; f1[i] != '\0'; i++)
		;
	for (j = 0; f2[j] != '\0'; j++)
		;
	result = malloc(sizeof(char) * (i + j + 1));
	if (result == NULL)
	{
		free(result);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		result[k] = f1[k];
	limit = j;
	for (j = 0; j <= limit; k++, j++)
		result[k] = f2[j];
	return (result);
}
