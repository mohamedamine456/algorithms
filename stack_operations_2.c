# include "stack_operations.h"

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
		temp1 = peek(stack, *top);
		pop(top);
		temp2 = peek(stack, *top);
		pop(top);
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
		temp = peek(st1, *topst1);
		pop(topst1);
		push(temp, st2, topst2, sizest2);
	}
}


void	r_a_b(int *stack, int top, int size)
{
	int tmp;
	int tmp2;
	int tmp_top;
	int *tmp_stack;

	tmp_top = -1;
	tmp_stack = (int *)malloc(sizeof(int) * (size + 1));
	tmp = peek(stack, top);
	pop(&top);
	while (!is_empty(top))
	{
		tmp2 = peek(stack, top);
		pop(&top);
		push(tmp2, tmp_stack, &tmp_top, size);
	}
	push(tmp, stack, &top, size);
	while (!is_empty(tmp_top))
	{
		tmp2 = peek(tmp_stack, tmp_top);
		pop(&tmp_top);
		push(tmp2, stack, &top, size);
	}
}

void	r_r(int *a, int *b, int topa, int topb, int sizea, int sizeb)
{
	if (!is_empty(topa))
		r_a_b(a, topa, sizea);
	if (!is_empty(topb))
		r_a_b(b, topb, sizeb);
}

void	r_r_a_b(int *stack, int top, int size)
{
	int tmp;
	int tmp2;
	int tmp_top;
	int *tmp_stack;

	tmp_top = -1;
	tmp_stack = (int *)malloc(sizeof(int) * (size + 1));
	while (!is_empty(top))
	{
		tmp2 = peek(stack, top);
		pop(&top);
		push(tmp2, tmp_stack, &tmp_top, size);
	}
	tmp = peek(tmp_stack, tmp_top);
	pop(&tmp_top);
	while (!is_empty(tmp_top))
	{
		tmp2 = peek(tmp_stack, tmp_top);
		pop(&tmp_top);
		push(tmp2, stack, &top, size);
	}
	push(tmp, stack, &top, size);
}

void	r_r_r(int *a, int *b, int topa, int topb, int sizea, int sizeb)
{
	if (!is_empty(topa))
		r_r_a_b(a, topa, sizea);
	if (!is_empty(topb))
		r_r_a_b(b, topb, sizeb);
}
