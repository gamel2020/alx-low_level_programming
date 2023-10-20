#include "lists.h"

/**
 * list_len - determines the length of a linked list
 * @h: pointer to the first node
 *
 * Return: the number of nodes in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
