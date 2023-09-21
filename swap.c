#include "monty.h"

/**
 * swap - swaps the top two elements of the stack.
 * @h: doubly linked list.
 * @line_number: line number.
 *
 * Return: void.
 */
void swap(stack_t **h, unsigned int line_number)
{
	stack_t *first, *second;

	if (!(*h) || !((*h)->next))
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	first = *h;
	second = (*h)->next;

	first->next = second->next;
	second->next = first;

	first->prev = second;
	second->prev = NULL;

	*h = second;
}
