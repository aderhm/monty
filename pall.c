#include "monty.h"

/**
 * pall - display all elements in the stack.
 * @h: doubly linked list.
 * @line_number: line number.
 *
 * Return: void.
 */
void pall(stack_t **h, unsigned int line_number)
{
	stack_t *current;

	(void)line_number;
	current = *h;
	while (current)
	{
		fprintf(stdout, "%d\n", current->n);
		current = current->next;
	}
}
