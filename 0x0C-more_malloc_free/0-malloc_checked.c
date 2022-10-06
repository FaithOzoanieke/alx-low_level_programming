#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @uju: function int parameter
 * Return: void
 */

void *malloc_checked(unsigned int uju)
{
	void *o = malloc(uju);

	if (o == NULL)
	{
		exit(98);
	}
	return (c);
}
