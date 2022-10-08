#include "monty.h"
/**
 *add_node - add new element at the beginning of stack
 *@stack: the start of stack
 *@n: data to be added for new element
 *
 *Return: pointer to newly created node, NULL if it fails
 */
stack_t *add_node(stack_t **stack, const int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *stack;
	new_node->prev = NULL;

	if (*stack)
		(*stack)->prev = new_node;
	*stack = new_node;

	return (new_node);
}

/**
 *queue_node - add element at the back of queue
 *@stack: head of queue
 *@n: data to be added
 *
 * Return: pointer to newly created element, NULL on failure
 */
stack_t *queue_node(stack_t **stack, const int n)
{
	stack_t *temp = *stack;
	stack_t *new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(new_node);
		return (NULL);
	}

	new_node->n = n;

	if (!(*stack))
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*stack = new_node;
		return (new_node);
	}

	while (temp)
	{
		if (!temp->next)
		{
			new_node->next = NULL;
			new_node->prev = temp;
			temp->next = new_node;
		}
		temp = temp->next;
	}
	return (new_node);
}

/**
 * print_stack - prints the contents of a stack_t stack
 * @stack: stack head
 *
 * Return: number of elements of the list
 */
size_t print_stack(const stack_t *stack)
{
	size_t c = 0;

	while (stack)
	{
		printf("%d\n", stack->n);
		stack = stack->next;
		c++;
	}

	return (c);
}

/**
 *free_stack - free stack
 *@stack: stack to free memory
 *
 * Return: void
 */
void free_stack(stack_t *stack)
{
	stack_t *temp = stack;
	stack_t *next;

	if (stack)
	{
		next = stack->next;
		while (temp)
		{
			free(temp);
			temp = next;
			if (next)
				next = next->next;
		}
	}
}
