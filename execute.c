#include "monty.h"

/**
 * execute - run opcodes
 * @string: string
 * @stack: head list
 * Return: void
 */

void execute(char *string[], stack_t *stack)
{
	int nl = 0;
	int n = 0;
	int i = 0;

	instruction_t st[] = {
		{"pall", pall},
		{"pint", pint},
		{"add", add},
		{"swap", swap},
		{"pop", pop},
		{"null", NULL}
	};

	for (nl = 1, n = 0; string[n + 1]; n++, nl++)
	{
		if (_strcmp("push", string[n]))
			push(&stack, nl, pushint(string[n], nl));
		else if (_strcmp("nop", string[n]))
			;
		else
		{
			while (!_strcmp(st[i].opcode, "null"))
			{
				if (_strcmp(st[i].opcode, string[n]))
				{
					st[i].f(&stack, nl);
					break;
				}
				i++;
			}
			if (_strcmp(st[i].opcode, "null") && !_strcmp(string[n], "\n"))
			{
				fprintf(stderr, "L%u: unknown instruction %s", nl, string[n]);
				if (!find(string[n]))
					fprintf(stderr, "\n");
				exit(EXIT_FAILURE);
			}
		}
	}
	free_stack(stack);
}
