/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 10:46:18 by mlachheb          #+#    #+#             */
/*   Updated: 2021/04/23 13:46:41 by mlachheb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACKS_H
# define STACKS_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct              s_stack
{
	int						size;
	int						top;
	int						*items;
}							t_stack;

t_stack create_stack(int size);
int     is_empty(int top);
int     is_full(int top, int size);
int     peek(t_stack stack);
void    pop(int *top);
t_stack	push(int new, t_stack stack);
void    print_all(t_stack stack);

t_stack	s_a_b(t_stack stack);
void    s_s(t_stack *a, t_stack *b);
void    p_a_b(t_stack *a, t_stack *b);
t_stack	r_a_b(t_stack stack);
void    r_r(t_stack *a, t_stack *b);
t_stack r_r_a_b(t_stack stack);
void    r_r_r(t_stack *a, t_stack *b);

#endif
