#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to head node
 * @index: index of the node to be returned, starting from 0
 * Return: pointer to the node of that index, or NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr_node;
	unsigned int curr_ind;

	if (head == NULL)
		return (NULL);
	curr_node = head;
	curr_ind = 0;
	while (curr_ind != index && curr_node->next != NULL)
	{
		curr_node = curr_node->next;
		++curr_ind;
	}
	if (curr_ind != index)
		return (NULL);
	return (curr_node);
}
