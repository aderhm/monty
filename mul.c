#include "monty.h"

/**
 * mul - multiplies the top two elements of the stack.
 * @h: doubly linked list.
 * @line_number: line number.
 *
 * Return: void.
 */
void mul(stack_t **h, unsigned int line_number)
{
	stack_t *first, *second;

	if (!(*h) || !((*h)->next))
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	first = *h;
	second = (*h)->next;

	second->n *= first->n;

	*h = second;

	free(first);
}
