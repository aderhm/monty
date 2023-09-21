#include "monty.h"

/**
 * sub - subtracts the top element of the stack
 * from the second top element of the stack.
 * @h: doubly linked list.
 * @line_number: line number.
 *
 * Return: void.
 */
void sub(stack_t **h, unsigned int line_number)
{
	stack_t *first, *second;

	if (!(*h) || !((*h)->next))
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	first = *h;
	second = (*h)->next;

	second->n -= first->n;

	*h = second;

	free(first);
}
