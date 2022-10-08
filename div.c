#include "monty.h"
/**
 *mdiv - divides second top element by top element in stack
 *@stack: head of stack
 *@line_num: line number
 *
 * Return: void
 */
void mdiv(stack_t **stack, unsigned int line_num)
{
	int quotient;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	if (((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_num);
		exit(EXIT_FAILURE);
		return;
	}

	quotient = ((*stack)->next->n) / ((*stack)->n);
	pop(stack, line_num);
	(*stack)->n = quotient;
}
