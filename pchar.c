#include "monty.h"

/**
 * pchar - prints the char at the top of the stack, followed by a new line.
 * @h: doubly linked list.
 * @line_number: line number.
 *
 * Return: void.
 */
void pchar(stack_t **h, unsigned int line_number)
{
	if (!(*h))
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*h)->n < 0 || (*h)->n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n",
			line_number);
		exit(EXIT_FAILURE);
	}

	fprintf(stdout, "%c\n", (*h)->n);
}
