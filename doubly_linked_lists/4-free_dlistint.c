#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head of the list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			head = head->next;
			free(head->prev);
		}
		free(head);
	}
}
