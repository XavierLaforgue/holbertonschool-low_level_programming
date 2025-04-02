#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index "index" of a
 * "dlistint_t" list
 * @head: address of the head node
 * @index: index of the node to be deleted
 * Return: 1 if it succeeds, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr_node;
	unsigned int curr_idx;

	if (head == NULL || *head == NULL)
		return (-1);
	curr_node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(curr_node);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	curr_idx = 0;
	while (curr_idx != index && curr_node->next != NULL)
	{
		curr_node = curr_node->next;
		++curr_idx;
	}
	if (curr_idx == index && curr_node->next == NULL)
	{
		curr_node->prev->next = NULL;
		return (1);
	}
	if (curr_idx != index)
		return (-1);
	curr_node->next->prev = curr_node->prev;
	curr_node->prev->next = curr_node->next;

	return (1);
}
