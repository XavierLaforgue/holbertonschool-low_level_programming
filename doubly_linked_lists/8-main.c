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
	int out;

	head = NULL;
	printf("---delete node in empty list------------\n");
	out = delete_dnodeint_at_index(&head, 0);
	printf("output = %d\n", out);
	printf("---add 0 to empty list------------\n");
	add_dnodeint_end(&head, 0);
	print_dlistint(head);
	printf("---delete node at index 1 of single-node list-------\n");
	out = delete_dnodeint_at_index(&head, 1);
	print_dlistint(head);
	printf("output = %d\n", out);
	printf("---delete node at index 0 of single-node list-------\n");
	out = delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("output = %d\n", out);
	printf("---add node 0 and node 1 to empty list------------\n");
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	print_dlistint(head);
	printf("---delete node at index 0 of two-node list-------\n");
	out = delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("output = %d\n", out);
	/*
	printf("---add node 0 to beginning of single-node list------------\n");
	add_dnodeint(&head, 0);
	print_dlistint(head);
	printf("---delete node at index 1 of two-node list-------\n");
	out = delete_dnodeint_at_index(&head, 1);
	print_dlistint(head);
	printf("output = %d\n", out);
	printf("---add node 1, 2, 3, and 4 to end of list------------\n");
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	print_dlistint(head);
	printf("---delete node at index 5 of a five-node list-------\n");
	out = delete_dnodeint_at_index(&head, 5);
	print_dlistint(head);
	printf("output = %d\n", out);
	printf("---delete node at index 4 of a five-node list-------\n");
	out = delete_dnodeint_at_index(&head, 4);
	print_dlistint(head);
	printf("output = %d\n", out);
	printf("---add node 4, 98, 402, and 1024 to end of list------------\n");
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);
	printf("---delete node at index 2 of a eight-node list-------\n");
	out = delete_dnodeint_at_index(&head, 2);
	print_dlistint(head);
	printf("output = %d\n", out);
	*/
	/*
	printf("------->1----------\n");
	delete_dnodeint_at_index(&head, 5);
	print_dlistint(head);
	printf("------->2----------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("------->3----------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("---------->4-------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("----------->5------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("----------->6------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	*/
	return (0);
}
