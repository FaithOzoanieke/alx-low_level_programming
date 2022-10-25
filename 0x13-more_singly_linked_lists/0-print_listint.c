#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the 1st node of the linked list in the program
 * Return: number of nodes in the program
 */
size_t print_listint(const listint_t *h)
{
	size_t nodenum = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodenum++;
		h = h->next;
	}

	return (nodenum);
}
