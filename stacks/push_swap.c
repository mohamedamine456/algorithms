/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 07:53:12 by mlachheb          #+#    #+#             */
/*   Updated: 2021/04/27 09:12:23 by mlachheb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

int main(int argc, char **argv)
{
	//int		retv;
	//int		i = 0;
	t_stack	stack_a;
	//char	**operations;

	if (argc < 2)
		fatal();
	else
	{
		if (check_args(argv + 1))
			fatal();
		else
		{
			stack_a = fill_stack(argc, argv);
			stack_a = sort_stack(stack_a);
		}
	}
	return (0);
}
