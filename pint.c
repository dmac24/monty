#include "monty.h"

/**
 * pint -  prints the value at the top of the stack, followed by a new line.
 * @stack: head list
 * @count: count line
 * Return: Void
 */
void pint(stack_t **stack, unsigned int count)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);

}
