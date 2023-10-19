#include "monty.h"
/**
 * push - function that pushes an element to the stack
 * @stack: pointer to the stack
 * @arg: value to push
 * @op: op
 * @line_number: current line number
 * @strm: monty file strm
 * Return: return void
 */
void push(stack_t **stack, char *arg, char *op, int line_number, FILE *strm)
{
	int i;
	stack_t *new_node;

	if (arg == NULL)
	{
		fprintf(stderr, "L%d: usage: push ineteger\n", line_number);
		free_stack_ops(stack, op, line_number, strm);
	}

	i = atoi(arg);
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack_ops(stack, op, line_number, strm);
	}

	new_node->n = i;
	new_node->prev = NULL;
	new_node->next = *stack;
	new_node->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}
