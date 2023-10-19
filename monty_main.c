#include "monty.h"
/**
 * main - entry point for monty interpreter
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: return 0 if success and EXIT_FAILURE if fail
 */
int main(int argc, char *argv[])
{
	FILE *monty_file;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: monty file\n");
		exit(EXIT_FAILURE);
	}

	monty_file = openMonty(argv[1]);

	if (monty_file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	read_monty_lines(monty_file, &stack);

	free_stack(stack);
	fclose(monty_file);

	return (EXIT_SUCCESS);
}
