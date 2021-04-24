/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:17:05 by mlachheb          #+#    #+#             */
/*   Updated: 2021/04/24 13:50:15 by mlachheb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

int		check_sort(t_stack stack)
{
	int	temp1;
	int	temp2;

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
