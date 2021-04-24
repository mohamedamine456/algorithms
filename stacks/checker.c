/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 10:39:01 by mlachheb          #+#    #+#             */
/*   Updated: 2021/04/24 12:10:13 by mlachheb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "stacks.h"

int		main(int argc, char **argv)
{
	t_stack	stack_a;
	char	**operations;

	if (argc < 2)
		fatal();
	else
	{
		if (check_args(&(argv[1])))
			fatal();
		else
		{
			stack_a = fill_stack(argc, argv);
			operations = read_operations();
			printf("---------------------------------------------------------------------\n");
			print_all(stack_a);	
			printf("\n---------------------------------------------------------------------\n");
			print_operations(operations);
			printf("\n---------------------------------------------------------------------\n");
			stack_a = apply_operations(stack_a, operations);
			print_all(stack_a);
		}
	}
}
