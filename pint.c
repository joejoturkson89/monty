#include "monty.h"
/**
 * pint - function that prints the value at the top of the stack,
 * followed by a new line
 * @stack: the stack
 * @line_number: current line number
 * Return: return void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stdout, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
