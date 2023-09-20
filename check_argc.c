#include "monty.h"

/**
 * check_argc - Checks the number of the command arguments.
 * @argc: The number to check.
 *
 * Return: void.
 */
void check_argc(int argc)
{
	if (argc == 2)
		return;
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
