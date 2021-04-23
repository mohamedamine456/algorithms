/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 10:46:18 by mlachheb          #+#    #+#             */
/*   Updated: 2021/04/23 12:23:01 by mlachheb         ###   ########.fr       */
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
void    s_s(int *a, int *b, int *topa, int *topb, int sizea, int sizeb);
void    p_a_b(int *st1, int *st2, int *topst1, int *topst2, int sizest2);
void    r_a_b(int *stack, int top, int size);
void    r_r(int *a, int *b, int topa, int topb, int sizea, int sizeb);
void    r_r_a_b(int *stack, int top, int size);
void    r_r_r(int *a, int *b, int topa, int topb, int sizea, int sizeb);

#endif
