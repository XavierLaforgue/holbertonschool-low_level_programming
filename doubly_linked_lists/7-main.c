#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* main - check the code
*
* Return: Always EXIT_SUCCESS.
*/
int main(void)
{
	dlistint_t *head;

	head = NULL;
	printf("---Insert 4096 at index = 5 of empty list---\n");
	insert_dnodeint_at_index(&head, 5, 4096);
	print_dlistint(head);
	printf("---Insert 3048 at index = 0 of empty list---\n");
	insert_dnodeint_at_index(&head, 0, 3048);
	print_dlistint(head);
	printf("---Insert 5384 at index = 0 of a single-node list---\n");
	insert_dnodeint_at_index(&head, 0, 5384);
	print_dlistint(head);
	printf("---Insert 0 at the end--------------\n");
	add_dnodeint_end(&head, 0);
	print_dlistint(head);
	printf("---Insert 1 at the end--------------\n");
	add_dnodeint_end(&head, 1);
	print_dlistint(head);
	printf("---Insert 2 at the end--------------\n");
	add_dnodeint_end(&head, 2);
	print_dlistint(head);
	printf("---Insert 3 at the end--------------\n");
	add_dnodeint_end(&head, 3);
	print_dlistint(head);
	printf("---Insert 4 at the end--------------\n");
	add_dnodeint_end(&head, 4);
	print_dlistint(head);
	printf("---Insert 98 at the end--------------\n");
	add_dnodeint_end(&head, 98);
	print_dlistint(head);
	printf("---Insert 402 at the end--------------\n");
	add_dnodeint_end(&head, 402);
	print_dlistint(head);
	printf("---Insert 1024 at the end--------------\n");
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);
	printf("---Insert 2024 at index 5--------------\n");
	insert_dnodeint_at_index(&head, 5, 2024);
	print_dlistint(head);
	printf("---Insert 6196 at index 25--------------\n");
	insert_dnodeint_at_index(&head, 25, 6196);
	print_dlistint(head);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}
