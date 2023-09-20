#include "monty.h"

/**
 * push - insert elements into the stack.
 * @h: doubly linked list
 * @line_number: number of line.
 *
 * Return: void.
 */
void push(stack_t **h, unsigned int line_number)
{
	char *push_arg;
	int data;
	stack_t *new;

	push_arg = strtok(NULL, " \t\n");
	if (!push_arg)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	data = atoi(push_arg);

	new = malloc(sizeof(stack_t));
	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->n = data;
	new->prev = NULL;
	new->next = *h;
	if (*h)
		(*h)->prev = new;
	*h = new;
}
