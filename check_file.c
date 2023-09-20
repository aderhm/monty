#include "monty.h"

/**
 * check_file - Checks if the file is opened.
 * @f: a file.
 * @av: an array of command line arguments.
 *
 * Return: void.
 */
void check_file(FILE *f, char **av)
{
	if (f)
		return;
	fprintf(stderr, "Error: Can't open file %s\n", av[1]);
	exit(EXIT_FAILURE);
}
