/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 15:06:42 by mlachheb          #+#    #+#             */
/*   Updated: 2021/04/28 12:37:28 by mlachheb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "stacks.h"

t_stack		sort_stack(t_stack stack_a, char ***operations)
{
	long	tmp;
	t_stack stack_b;

	stack_b = create_stack(stack_a.size);
	while (!is_empty(stack_a.top) && !check_sort_as(stack_a))
	{
		stack_a = check_ra(stack_a, operations);
		if (stack_a.top >= 1)
			stack_a = check_sa(stack_a, operations);
		if (!check_sort_as(stack_a) || peek(stack_a) < peek(stack_b))
		{
			tmp = peek(stack_a);
			pop(&(stack_a.top));
			if (is_empty(stack_b.top) || tmp > peek(stack_b))
			{	
				*operations = ft_resize_opers(*operations, ft_strdup("pb"));
				stack_b = push(tmp, stack_b);
			}
			else
				sort_helper(&stack_a, &stack_b, tmp, operations);
		}
	}
	//while (!is_empty(stack_b.top))
	//{
	//	*operations = ft_resize_opers(*operations, ft_strdup("pa"));
	//	tmp = peek(stack_b);
	//	pop(&(stack_b.top));
	//	stack_a = push(tmp, stack_a);
	//}
	move_b_a(&stack_a, &stack_b);
	free(stack_b.items);
	return (stack_a);
}

void	sort_helper(t_stack *stack_a, t_stack *stack_b,
		long tmp, char ***operations)
{
	long	tmp2;

	if (tmp < stack_b->first)
	{
		*operations = ft_resize_opers(*operations, ft_strdup("pb"));
		*stack_b = push(tmp, *stack_b);
		*operations = ft_resize_opers(*operations, ft_strdup("rb"));
		*stack_b = r_a_b(*stack_b);
	}
	else
	{
		while (!is_empty(stack_b->top) && tmp < peek(*stack_b) && !check_sort_ds(*stack_b))
		{
			*operations = ft_resize_opers(*operations, ft_strdup("pa"));
			tmp2 = peek(*stack_b);
			pop(&(stack_b->top));
			*stack_a = push(tmp2, *stack_a);
		}
		*stack_b = push(tmp, *stack_b);
	}
}
