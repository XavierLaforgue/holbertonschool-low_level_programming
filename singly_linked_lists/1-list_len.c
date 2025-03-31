#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to header of linked list
 * Return: number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t n_nodes;
	const list_t *next;

	next = h;
	n_nodes = 0;
	while (next != NULL)
	{
		++n_nodes;
		next = next->next;
	}

	return (n_nodes);
}
