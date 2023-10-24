#include "lists.h"

size_t print_listint(const listint_t *h) {
	size_t count = 0;  // Initialize a counter for nodes

	while (h != NULL) {
	printf("%d\n", h->n);  // Print the current node's value
	h = h->next;  // Move to the next node
	count++;  // Increment the counter
	}

	return count;  // Return the number of nodes
}
