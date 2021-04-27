/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 10:46:18 by mlachheb          #+#    #+#             */
/*   Updated: 2021/04/27 11:53:57 by mlachheb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACKS_H
# define STACKS_H
#include "shared/shared.h"

/*
 * prototypes for read_operations.c file
 */

char			**read_operations(void);
int				is_operation(char *str);

/*
 * prototypes for apply_operations.c file
 */

t_stack			apply_operations(t_stack stack_a, char **opers);

/*
 * prototypes for opers_functions.c file
 */

t_stack			sort_stack(t_stack stack_a, char ***operations);
void			sort_helper(t_stack *stack_a, t_stack *stack_b,
		long tmp, char ***operations);
t_stack			check_sa(t_stack stack, char ***operations);
t_stack			check_ra(t_stack stack, char ***operations);

#endif
