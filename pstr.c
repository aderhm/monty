#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack.
 * @h: doubly linked list.
 * @line_number: line number.
 *
 * Return: void.
 */
void pstr(stack_t **h, unsigned int line_number)
{
	(void)line_number;
	if (!(*h))
	{
		fprintf(stdout, "\n");
		return;
	}

	while (*h && ((*h)->n > 0 && (*h)->n <= 127))
	{
		fprintf(stdout, "%c", (*h)->n);
		*h = (*h)->next;
	}
	fprintf(stdout, "\n");
}
