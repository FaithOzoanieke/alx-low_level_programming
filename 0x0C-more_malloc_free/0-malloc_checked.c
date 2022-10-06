#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @z: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int z)
{
	void *ptr;

	ptr = malloc(z);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
