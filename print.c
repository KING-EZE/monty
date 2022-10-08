#include "monty.h"
/**
 *pint - print value at the top of stack
 *@stack: head of stack
 *@line_num: line number
 *
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_num)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
