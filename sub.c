#include "monty.h"
/**
 *sub - subtract top element from second top element in stack
 *@stack: head of stack
 *@line_num: line number
 *
 *Return: void
 */
void sub(stack_t **stack, unsigned int line_num)
{
	int diff;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	diff = ((*stack)->next->n) - ((*stack)->n);
	pop(stack, line_num);
	(*stack)->n = diff;
}
