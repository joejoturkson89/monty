#include "monty.h"
/**
 * pall - function that prints all values on the stack,
 * starting from the top.
 * @stack: the stack
 * @line_number: current line number
 * Return: return void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *h;
	(void)line_number;

	h = *stack;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
