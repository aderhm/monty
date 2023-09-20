#include "monty.h"

/**
 * free_ds - frees data stacks and queues.
 * @h: linked list.
 *
 * Return: void.
 */
void free_ds(stack_t *h)
{
	stack_t *current;

	while (h)
	{
		current = h;
		free(current);
		h = h->next;
	}
}
