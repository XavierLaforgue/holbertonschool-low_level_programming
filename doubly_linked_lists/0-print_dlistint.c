#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: header to the doubly-linked list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes;
	const dlistint_t *next;

	if (h == NULL)
		return (0);
	n_nodes = 1;
	next = h;
	while (next->next != NULL)
	{
		printf("%d\n", next->n);
		next = h->next;
		++n_nodes;
	}
	printf("%d\n", next->n);

	return (n_nodes);
}
