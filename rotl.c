#include "monty.h"

/**
* rotl - rotates stack at the top
* @stack: stack head
* @line_num: line count
*
* Return: void
*/
void rotl(stack_t **stack, unsigned int line_num)
{
	stack_t *left;
	stack_t *right;

	(void) line_num;
	if (!stack || !*stack || !(*stack)->next)
		return;

	left = right = *stack;

	while (right->next)
		right = right->next;
	right->next = left;
	left->prev = right;
	*stack = left->next;
	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
}
