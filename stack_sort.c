#include <stdio.h>
#include <stdlib.h>

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
	else
	{
		printf("couldn't push bcs the stack is full.\n");
	}
}

// ############################################################################################### //

/**
 * Function from the subject 
 * s_a_b : swap the last two elements in stack (a or b)
 * s_s : swap the last two elements in stack (a and b)
 * p_a_b : push element to (a or b)
 * r_a_b : shift up elements of stack (a or b) by 1. the first elements become the last one.
 * r_r : shift up elements of stack (a and b) by 1. the first elements become the last one.
 * r_r_a_b : shift down elements of stack (a or b) by 1. the last elements become the first one.
 * r_r_r : shift down elements of stack (a and b) by 1. the last elements become the first one.
*/

void	s_a_b(int *stack, int *top, int size)
{
	int temp1;
	int temp2;

	if (*top > 0)
	{
		temp1 = pop(stack, top);
		temp2 = pop(stack, top);
		push(temp2, stack, top, size);
		push(temp1, stack, top, size);
	}
}

void	s_s(int *a, int *b, int *topa, int *topb, int sizea, int sizeb)
{
	s_a_b(a, topa, sizea);
	s_a_b(b, topb, sizeb);
}

void	p_a_b(int *st1, int *st2, int *topst1, int *topst2, int sizest2)
{
	int temp;

	if (!is_empty(*topst1))
	{
		temp = pop(st1, topst1);
		push(temp, st2, topst2, sizest2);
	}
}


void	r_a_b(int *stack, )

/**
 * Sort Function to sort stack using another stack
*/

void	sort_stack(int *a, int top, int size, int fa)
{

}


// ############################################################################################### //


/**
 * Main function for read args and test
*/

int		main(int argc, char **argv)
{
	int		*a;
	int		fa;
	int		topa = -1;
	int		sizea;
	int 	i = 0;

	if (argc < 2)
	{
		printf("Error Args<%s>.\n", argv[0]);
		return (0);
	}
	else
	{
		a = (int *)malloc(sizeof(int) * (argc - 1));
		if (a == NULL)
		{
			printf("Error Allocation\n");
			return (0);
		}
		else
		{
			sizea = argc - 1;
			while (sizea - i > 0)
			{
				push(atoi(argv[sizea - i]), a, &topa, sizea);
				i++;
			}
			fa = atoi(argv[sizea]);
			sort_stack(a, top, size, fa);
			i = sizea - 1;
			while (i >= 0)
			{
				printf("%7d", a[i]);
				i--;
			}
		}
	}
}
