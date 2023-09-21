#include "monty.h"

instruction_t oc[] = {
	{"push", push},
	{"pall", pall},
	{"pint", pint},
	{"pop", pop},
	{"swap", swap},
	{"add", add},
	{"nop", nop},
	{"sub", sub},
	{"div", divv},
	{"mul", mul},
	{"mod", mod},
	{"pchar", pchar},
	{"pstr", pstr},
	{NULL, NULL}
};

/**
 * main - Entry point
 * @argc: number of arguments,
 * @argv: a pointer to an array that contains the args.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(int argc, char **argv)
{
	stack_t *stack;
	FILE *file;
	char *line, *instruction;
	size_t length = 0;
	int i, instruction_found;
	unsigned int line_number;

	check_argc(argc);

	file = fopen(argv[1], "r");
	check_file(file, argv);

	stack = NULL;
	line_number = 1;
	while (getline(&line, &length, file) != -1)
	{
		instruction = strtok(line, " \t\n");
		if (instruction && strncmp(instruction, "#", 1))
		{
			instruction_found = 0;
			for (i = 0; oc[i].opcode != NULL; i++)
			{
				if (strcmp(oc[i].opcode, instruction) == 0)
				{
					instruction_found = 1;
					oc[i].f(&stack, line_number);
					break;
				}
			}
			if (!instruction_found)
				perr_fce(file, line, instruction, line_number);
		}
		line_number++;
	}

	free(line);
	free_ds(stack);
	fclose(file);

	return (0);
}
