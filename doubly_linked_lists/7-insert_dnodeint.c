#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: address to the head node of the list
 * @idx: position where to insert the new node
 * @n: integer the new node will contain
 * Return: the address of the new node, or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr_node, *new_node, *next_node;
	unsigned int curr_idx;

	if (h == NULL || (*h == NULL && idx != 0))
		return (NULL);
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	curr_node = *h;
	curr_idx = 0;
	while (curr_idx != idx - 1 && curr_node->next != NULL)
	{
		curr_node = curr_node->next;
		++curr_idx;
	}
	if (curr_idx != idx - 1)
		return (NULL);
	next_node = curr_node->next;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	curr_node->next = new_node;
	if (next_node != NULL)
		next_node->prev = new_node;
	new_node->n = n;
	new_node->prev = curr_node;
	new_node->next = next_node;

	return (new_node);
}
