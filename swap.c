#include "monty.h"
/**
 *swap - swipe the top two elements in a stack
 *@stack: top of stack
 *@line_num: line number
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_num)
{
	int num = 0;
	stack_t *temp = NULL;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	num = temp->n;
	temp->n = num;

	temp->n = temp->next->n;
	temp->next->n = num;
}
