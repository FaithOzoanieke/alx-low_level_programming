#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int u, y;

	for (u = 0; haystack[u] != '\0'; u++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[u + y] != needle[y])
				break;
		}
		if (!needle[y])
			return (&haystack[u]);
	}
	return (NULL);
}
