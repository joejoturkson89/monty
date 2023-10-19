#include "monty.h"
/**
 * pall - function that prints all values on the stack,
 * starting from the top.
 * @stack:pointer to the stack
 * Return: return void
 */
void pall(stack_t *stack)
{
	while (stack != NULL)
	{
		printf("%d\n", stack->n);
		stack = stack->next;
	}
}
