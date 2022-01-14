#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack
 *
 * @stack: head list
 * @count: count list
 *
 * Return: Void
 */

void swap(stack_t **stack, unsigned int count)
{
	stack_t *h = *stack, *ptr;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", count);
		exit(EXIT_FAILURE);
	}

	if (h && h->next)
	{
		ptr = h->next;
		if (ptr->next)
			ptr->next->prev = h;
		h->next = ptr->next;
		ptr->prev = NULL;
		ptr->next = h;
		h->prev = ptr;
		*stack = ptr;
	}
}
