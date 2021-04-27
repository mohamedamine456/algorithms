/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 07:53:12 by mlachheb          #+#    #+#             */
/*   Updated: 2021/04/27 13:35:44 by mlachheb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

int main(int argc, char **argv)
{
	//int		retv;
	//int		i = 0;
	t_stack	stack_a;
	char	**operations;

	operations = NULL;
	if (argc < 2)
		fatal();
	else
	{
		if (check_args(argv + 1))
			fatal();
		else
		{
			stack_a = fill_stack(argc, argv);
			stack_a = sort_stack(stack_a, &operations);
			//while (i <= stack_a.top)
			//	printf("%9ld", stack_a.items[i++]);
			//printf("\n");
			//i = 0;
			//while (operations != NULL && operations[i] != NULL)
			//	printf("%9s", operations[i++]);
		}
	}
	return (0);
}
