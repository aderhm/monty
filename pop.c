#include "monty.h"

/**
 * pop - removes the top element of the stack.
 * @h: doubly linked list.
 * @line_number: line number.
 *
 * Return: void.
 */
void pop(stack_t **h, unsigned int line_number)
{
	stack_t *top_element;

	if (!(*h))
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	top_element = *h;
	*h = (*h)->next;
	free(top_element);
}
