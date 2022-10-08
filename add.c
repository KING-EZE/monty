#include "monty.h"
/**
 * add - get sum of two top elements of stack
 * @stack: head of stack
 * @line_num: line number
 * Return: void
 */
void add(stack_t **stack, unsigned int line_num)
{
	int sum;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}
	sum = ((*stack)->next->n) + ((*stack)->n);
	pop(stack, line_num);
	(*stack)->n = sum;
}
