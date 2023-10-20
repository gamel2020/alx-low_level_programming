#include "lists.h"

/**
 * _strlen - determines the length of a string
 *
 * @s: the string whose length to check
 *
 * Return: the number of characters in the string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - print a linked listes
 * @h: pointer to the first node
 *
 * Return: the number of nodes in the linked list
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
