#include "monty.h"

/**
 * pop - removes the top element of the stack
 *
 * @stack: head list
 * @count: count line
 *
 * Return: void
 */

void pop(stack_t **stack, unsigned int count)
{
	stack_t *h = *stack;

	if (!(*stack))
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", count);
		exit(EXIT_FAILURE);
	}


	if (h)
	{
		*stack = (h)->next;
		free(h);
	}
}
