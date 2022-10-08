#include "monty.h"
/**
 *mul - get product of top two elements in stack
 *@stack: head of stack
 *@line_num: line number
 *
 *Return: void
 */
void mul(stack_t **stack, unsigned int line_num)
{
	int product;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_num);
		exit(EXIT_FAILURE);
		return;
	}

	product = ((*stack)->next->n) * ((*stack)->n);
	pop(stack, line_num);
	(*stack)->n = product;
}
