#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly-linked
 * dlistint_t list
 * @head: pointer to the first element of the list
 * @n: integer to be added to the newly created node
 * Return: address of the new element, or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *ref_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	ref_node = *head;
	if (*head != NULL)
	{
		while (ref_node->next != NULL)
			ref_node = ref_node->next;
		ref_node->next = new_node;
	}
	new_node->prev = ref_node;
	if (*head == NULL)
		*head = new_node;

	return (new_node);
}
