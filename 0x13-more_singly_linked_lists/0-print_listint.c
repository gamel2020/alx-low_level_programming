#include "lists.h"

/**
 * print_listint - print s a linked lists
 * @h: pointer to first node
 *
 * return: size of list
 */

size_t print_listint(const listint_t *h)
{
	size_t d = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		d++;
	}
	return (d);
}

