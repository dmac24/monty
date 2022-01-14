#include "monty.h"

/**
 * pall - prints all the values on the stack, starting from the top.
 * @stack: head list.
 * @count: count line.
 *
 * Return: Void
 */

void pall(stack_t **stack, unsigned int count)
{
	stack_t *h = *stack;
	(void)count;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
