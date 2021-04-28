/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 07:53:12 by mlachheb          #+#    #+#             */
/*   Updated: 2021/04/28 11:53:26 by mlachheb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

int main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack stack_tmp;
	char	**operations1;
	char	**operations2;

	operations1 = NULL;
	operations2 = NULL;
	if (argc < 2)
		fatal();
	else
	{
		if (check_args(argv + 1))
			fatal();
		else
		{
			stack_a = fill_stack(argc, argv);
			stack_tmp = fill_stack(argc, argv);
			stack_a = sort_stack_ra(stack_a, &operations1);
			stack_tmp = sort_stack_rra(stack_tmp, &operations2);
			check_print_operations(operations1, operations2);
			ft_free_opers(operations1);
			ft_free_opers(operations2);
			free(stack_tmp.items);
			free(stack_a.items);
		}
	}
	return (0);
}

