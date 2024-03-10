#include "monty.h"

/**
 * m_pall - prints the stack
 * @head: indicates the stack head
 * @counter: no used
 *
 * Return: no return value
 */

void m_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
