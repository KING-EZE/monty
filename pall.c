#include "monty.h"
/**
 *pall - print values on the stack, starting at the top
 *@stack: stack
 *@line_num: line number
 *
 * Return: void
 */
void pall(stack_t **stack, __attribute__((unused)) unsigned int line_num)
{
	print_stack(*stack);
}
