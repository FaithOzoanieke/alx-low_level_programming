#include "lists.h"
/**
 * print_list - prints list in the program.
 * @u: param list
 * Return: struct
 */

size_t print_list(const list_t *u)
{
	size_t nodelen;

	nodelen = 0;
	while (u != NULL)
	{
		if (u->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodelen++;
	}
	return (nodelen);
}
