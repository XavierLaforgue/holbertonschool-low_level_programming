#include "lists.h"

/**
 * add_node_end - adds a new node at the ned of a list_t list
 * @head: pointer to the head node pointer
 * @str: string to be duplicated into the new node
 * Return: address of the new element, or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last, *next;
	unsigned int str_len;

	next = malloc(sizeof(list_t));
	if (next == NULL)
		return (NULL);
	if (*head == NULL)
		*head = next;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = next;
	}
	next->str = strdup(str);
	str_len = 0;
	while (str[str_len] != '\0')
		++str_len;
	next->len = str_len;
	next->next = NULL;
	return (next);
}
