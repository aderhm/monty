#include "monty.h"

/**
 * perr_fce - Print the [unknown instruction] error.
 * @f: the file that contains the instructions,
 * @line: the line that contains the current instruction,
 * @inst: the instruction,
 * @ln: the line number.
 *
 * Return: void.
 */
void perr_fce(FILE *f, char *line, char *inst, unsigned int ln)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", ln, inst);
	free(line);
	fclose(f);
	exit(EXIT_FAILURE);
}
