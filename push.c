#include "monty.h"
/**
 *push - add element to stack
 *@stack: stack
 *@line_num: line number
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_num)
{
	char *n = global.argument;

	if ((is_digit(n)) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_num);
		exit(EXIT_FAILURE);
	}

	if (global.data == 1)
	{
		if (!add_node(stack, atoi(global.argument)))
			exit(EXIT_FAILURE);
	}
	else
	{
		if (!queue_node(stack, atoi(global.argument)))
			exit(EXIT_FAILURE);
	}
}
