#include <stdio.h>

void	push(char element, char stack[], int *top, int stack_size)
{
	if (*top == -1)
	{
		stack[stack_size - 1] = element;
		*top = stack_size - 1;
	}
	else if (*top == 0)
	{
		printf("The Stack is already full.\n");
	}
	else
	{
		stack[(*top) - 1] = element;
		(*top)--;
	}
}

void	pop(char stack[], int *top, int stack_size)
{
	if (*top == -1)
	{
		printf("The stack is empty.\n");
	}
	else
	{
		printf("element popped: %c \n", stack[(*top)]);
		if ((*top) == stack_size - 1)
		{
			*top = -1;
		}
		else
		{
			(*top)++;
		}
	}
}

int main()
{
	int		stack_size = 4;
	char	stack[stack_size];
	int		top = -1;

	push ('a', stack, &top, stack_size);
	printf("Element on top: {%c}.\n", stack[top]);
	push ('b', stack, &top, stack_size);
	printf("Element on top: {%c}.\n", stack[top]);
	pop(stack, &top, stack_size);
	printf("Element on top: {%c}.\n", stack[top]);
	pop(stack, &top, stack_size);
	printf("Top: {%d}.\n", top);
	pop(stack, &top, stack_size);
	return (0);
}
