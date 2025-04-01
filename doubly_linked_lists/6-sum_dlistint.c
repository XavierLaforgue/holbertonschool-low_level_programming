#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data (n) of a dlistint_t linked list
 * @head: pointer to head node
 * Return: the sum of all ints in the dlistint_t list, 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr_node;
	int sum;

	if (head == NULL)
		return (0);
	curr_node = head;
	sum = curr_node->n;
	while (curr_node->next != NULL)
	{
		curr_node = curr_node->next;
		sum = sum + curr_node->n;
	}

	return (sum);
}
