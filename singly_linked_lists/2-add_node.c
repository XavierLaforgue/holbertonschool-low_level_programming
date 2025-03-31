#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer to the first node (head node)
 * @str: string to be duplicated
 * Return: addres of new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *next;
	unsigned int str_len;

	next = *head;
	*head = malloc(sizeof(list_t));
	if (*head == NULL)
		return (NULL);
	(*head)->str = strdup(str);
	(*head)->next = next;
	str_len = 0;
	while (str[str_len] != '\0')
		++str_len;
	(*head)->len = str_len;

	return (*head);
}
