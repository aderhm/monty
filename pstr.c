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
	stack_t *temp;

	(void)line_number;

	temp = *h;
	while (temp && (temp->n > 0 && temp->n <= 127))
	{
		fprintf(stdout, "%c", temp->n);
		temp = temp->next;
	}
	fprintf(stdout, "\n");
}
