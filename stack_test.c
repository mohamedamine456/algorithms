#include <stdio.h>

int		is_empty(int top)
{
	if (top == -1)
		return (1);
	else
		return (0);
}

int		is_full(int top, int size)
{
	if (top == size)
		return (1);
	else
		return (0);
}

int		peek(int *stack, int top)
{
	return (stack[top]);
}

int		pop(int *stack, int *top)
{
	int	popped;

	if (!is_empty(*top))
	{
		popped = stack[*top];
		*top = *top - 1;
		return (popped);
	}
	else
	{
		printf("Couldn't pop bcs the stack is empty.\n");
		return (0);
	}
}

void	push(int to_push, int *stack, int *top, int size)
{
	if (!is_full(*top, size))
	{
		*top = *top + 1;
		stack[*top] = to_push;
	}
	else
	{
		printf("couldn't push bcs the stack is full.\n");
	}
}

int main()
{
	int size = 10;
	int top = -1;
	int stack[size];
	int tmp;

	push(-1, stack, &top, size);
	push(-78, stack, &top, size);
	push(2, stack, &top, size);
	push(56, stack, &top, size);
	push(71, stack, &top, size);
	push(-9, stack, &top, size);
	push(3, stack, &top, size);
	while (!is_empty(top))
	{
		tmp = pop(stack, &top);
		printf("Element Popped : %d\n", tmp);
	}
	printf("Stack Full: %s\n", is_full(top, size) ? "True": "False");
	printf("Stack Empty: %s\n", is_empty(top) ? "True": "False");
	return (0);
}
