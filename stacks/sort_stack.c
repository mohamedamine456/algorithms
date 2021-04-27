/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 15:06:42 by mlachheb          #+#    #+#             */
/*   Updated: 2021/04/27 08:11:14 by mlachheb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "stacks.h"

t_stack		sort_stack(t_stack stack_a)
{
	long	tmp;
	long	tmp2;
	t_stack stack_b;

	stack_b = create_stack(stack_a.size);
	while (!is_empty(stack_a.top))
	{
		tmp = peek(stack_a);
		pop(&(stack_a.top));
		if (is_empty(stack_b.top) || tmp > peek(stack_b))
			stack_b = push(tmp, stack_b);
		else
		{
			while (!is_empty(stack_b.top) && tmp < peek(stack_b))
			{
				tmp2 = peek(stack_b);
				pop(&(stack_b.top));
				stack_a = push(tmp2, stack_a);
			}
			stack_b = push(tmp, stack_b);
		}
	}
	while (!is_empty(stack_b.top))
	{
		tmp = peek(stack_b);
		pop(&(stack_b.top));
		stack_a = push(tmp, stack_a);
	}
	return (stack_a);
}
