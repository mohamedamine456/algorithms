# include "stacks.h"

t_stack	create_stack(int size)
{
	t_stack stack;

	stack.top = -1;
	stack.size = size;
	stack.items = (long *)malloc(size * sizeof(long));
	return (stack);
}

/**
 * Function test if the stack is empty
*/

int		is_empty(int top)
{
	if (top == -1)
		return (1);
	else
		return (0);
}

/**
 * Function Test if the stack is full
*/

int		is_full(int top, int size)
{
	if (top == size - 1)
		return (1);
	else
		return (0);
}

/**
 * Function returns top element in the stack
*/

long	peek(t_stack stack)
{
	return (stack.items[stack.top]);
}

/**
 * Function To pop an element from the stack
*/

void	pop(int *top)
{
	if (!is_empty(*top))
	{
		*top = *top - 1;
	}
}

/**
 * Function to push an element to stack
*/

t_stack	push(long new, t_stack stack)
{
	if (!is_full(stack.top, stack.size))
	{
		stack.top = stack.top + 1;
		stack.items[stack.top] = new;
	}
	return (stack);
}

void	print_all(t_stack stack)
{
	int number;

	while (stack.top > -1)
	{
		number = peek(stack);
		pop(&stack.top);
		printf("%9d", number);
	}
}
