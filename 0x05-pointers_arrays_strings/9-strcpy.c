#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, and also, by
 * terminating null byte, to a buffer pointed by a @dest.
 * @dest: A buffer I copy to.
 * @src: A source string to cpoy.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int buf = 0;

	for (buf = 0; src[buf] != '\0'; buf++)
	{
		dest[buf] = src[buf];
	}
	dest[buf] = '\0';
	return (dest);

}
