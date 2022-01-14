#include "monty.h"

/**
 * free_stack - free singly linked list
 *
 * @head: pointer to list
 *
 * Return: Nothing
 */

void free_stack(stack_t *head)
{
	stack_t *node = head;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}

/**
 * free_cof - frees content
 *
 * @a: pointer to array
 *
 * Return: Nothing
 */

void free_cof(char *a[])
{
	int i = 0;

	while (a[i] != NULL)
	{
		free(a[i]);
		i++;
	}
}
