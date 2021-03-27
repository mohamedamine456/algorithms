# include "stack_operations.h"

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
	if (top == size)
		return (1);
	else
		return (0);
}

/**
 * Function returns top element in the stack
*/

int		peek(int *stack, int top)
{
	return (stack[top]);
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

void	push(int to_push, int *stack, int *top, int size)
{
	if (!is_full(*top, size))
	{
		*top = *top + 1;
		stack[*top] = to_push;
	}
}
