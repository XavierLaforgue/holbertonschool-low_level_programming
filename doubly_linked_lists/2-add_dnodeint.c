#include "lists.h"
#include <stdlib.h> /* for exit, malloc and free (and NULL)*/
/**
 * add_dnodeint - adds a new node at the beginning of a doubly-linked
 * dlistint_t list
 * @head: pointer to the first element of the list
 * @n: integer to be added to the newly created node
 * Return: address of the new element, or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
