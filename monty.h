#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE
#define _POSIX_C_SOURCE 200809L

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/syscall.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int count);
} instruction_t;

/** prototypes*/

void push(stack_t **stack, unsigned int count, int n);
void pall(stack_t **stack, unsigned int count);
void pint(stack_t **stack, unsigned int count);
void pop(stack_t **stack, unsigned int count);
void swap(stack_t **stack, unsigned int count);
void add(stack_t **stack, unsigned int count);


void execute(char *string[], stack_t *stack);
void free_stack(stack_t *head);
void free_cof(char *a[]);

int mixnum(char *cof, int nl);
int _strcmp(char *opcode, char *cof);
int find(char *cof);
int pushint(char *cof, int nl);

#endif
