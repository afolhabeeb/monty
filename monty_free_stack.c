#include "monty.h"

/**
* monty_free_stack - frees a doubly linked list
* @head: head of the stack
*/

void monty_free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
