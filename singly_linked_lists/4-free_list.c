#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the first node of a list_t list
 * Return: void, nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			tmp = head->next;
			free(head->str);
			free(head);
			head = tmp;
		}
		free(head->str);
		free(head);
	}
}
