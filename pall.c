#include "monty.h"
/**
 * pall - function that prints all the values on the stack,
 * starting from the top of the stack
 * @stack: the stack
 * @line_number: current line number
 * Return: return void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	UNSED(line_number);

	tmp = *stack;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
