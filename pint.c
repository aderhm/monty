#include "monty.h"

/**
 * pint - prints the value at the top of the stack, followed by a new line.
 * @h: doubly linked list.
 * @line_number: line number.
 *
 * Return: void.
 */
void pint(stack_t **h, unsigned int line_number)
{
	(void)line_number;
	fprintf(stdout, "%d\n", (*h)->n);
}
