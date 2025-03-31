#include "lists.h"

/**
 * main - function to test add_node function
 * Return: always 0
 */

int main(void)
{
	list_t *head;

	head = NULL;
	add_node(&head, "Alexandro");
	print_list(head);
	return (0);
}