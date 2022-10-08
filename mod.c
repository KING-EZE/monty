#include "monty.h"
/**
 *mod - computes remainder of division of second top element
 *by top element in stack
 *@stack: head of stack
 *@line_num: line number
 *
 *Return: void
 */
void mod(stack_t **stack, unsigned int line_num)
{
	int rem;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}
	if (((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_num);
		exit(EXIT_FAILURE);
		return;
	}

	rem = ((*stack)->next->n) % ((*stack)->n);
	pop(stack, line_num);
	(*stack)->n = rem;
}
