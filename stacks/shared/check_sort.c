/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:17:05 by mlachheb          #+#    #+#             */
/*   Updated: 2021/04/27 11:52:30 by mlachheb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shared.h"

int		check_sort(t_stack stack)
{
	long	temp1;
	long	temp2;

	if (stack.size - 1 != stack.top)
		return (0);
	if (!is_empty(stack.top))
	{
		temp1 = peek(stack);
		pop(&(stack.top));
	}
	while (!is_empty(stack.top))
	{
		temp2 = peek(stack);
		pop(&(stack.top));
		if (temp1 >= temp2)
			return (0);
		temp1 = temp2;
	}
	return (1);
}

int		check_sort_as(t_stack stack)
{
	long	temp1;
	long	temp2;

	if (!is_empty(stack.top))
	{
		temp1 = peek(stack);
		pop(&(stack.top));
	}
	while (!is_empty(stack.top))
	{
		temp2 = peek(stack);
		pop(&(stack.top));
		if (temp1 >= temp2)
			return (0);
		temp1 = temp2;
	}
	return (1);
}

int		check_sort_ds(t_stack stack)
{
	long	temp1;
	long	temp2;

	if (!is_empty(stack.top))
	{
		temp1 = peek(stack);
		pop(&(stack.top));
	}
	while (!is_empty(stack.top))
	{
		temp2 = peek(stack);
		pop(&(stack.top));
		if (temp1 <= temp2)
			return (0);
		temp1 = temp2;
	}
	return (1);
}