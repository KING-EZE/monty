#include "monty.h"
/**
 *pop - removes top element of a stack
 *@stack: head of stack
 *@line_num: line number
 *
 * Return: void
 */
void pop(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = NULL;

	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;
	free(*stack);
	*stack = temp;

	if (!*stack)
		return;
	(*stack)->prev = NULL;
}
