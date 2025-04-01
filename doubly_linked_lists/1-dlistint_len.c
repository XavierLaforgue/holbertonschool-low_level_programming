#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly-linked dlistint_t
 * list
 * @h: header of the doubly-linked list
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n_nodes;
	const dlistint_t *next;

	if (h == NULL)
		return (0);
	next = h;
	n_nodes = 1;
	while (next->next != NULL)
	{
		next = next->next;
		++n_nodes;
	}

	return (n_nodes);
}
