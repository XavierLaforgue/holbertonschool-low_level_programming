#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list_t list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *next;
	size_t n_nodes;

	n_nodes = 0;
	next = h;
	while (next != NULL)
	{
		if (next->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", next->len, next->str);
		next = next->next;
		++n_nodes;
	}

	return (n_nodes);
}
