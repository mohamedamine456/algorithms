/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 10:46:18 by mlachheb          #+#    #+#             */
/*   Updated: 2021/04/23 16:36:38 by mlachheb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACKS_H
# define STACKS_H
# include "structs.h"
# define BUFFER_SIZE 1
# define OPERS "sa sb ss pa pb ra rb rr rra rrb rrr"

/*
 * prototypes for operations.c file
*/

t_stack 		create_stack(int size);
int     		is_empty(int top);
int     		is_full(int top, int size);
int     		peek(t_stack stack);
void    		pop(int *top);
t_stack			push(int new, t_stack stack);
void    		print_all(t_stack stack);

/*
 * prototypes for sort_operations.c file
*/

t_stack			s_a_b(t_stack stack);
void    		s_s(t_stack *a, t_stack *b);
void    		p_a_b(t_stack *a, t_stack *b);
t_stack			r_a_b(t_stack stack);
void    		r_r(t_stack *a, t_stack *b);
t_stack 		r_r_a_b(t_stack stack);
void    		r_r_r(t_stack *a, t_stack *b);

/*
 * prototypes for ft_atoi.c file
*/

int				number(const char *str, int neg);
int				ft_atoi(const char *str);

/*
 * prototypes for get_next_line.c file
*/

int				get_next_line(int fd, char **line);
int				make_line(char **grd, char **line);
char			*ft_resize(char *s1, char *s2);
int				check_end_line(char *str);

/*
 * prototypes for ft_split.c file
*/

char    		**ft_split(char const *s, char c);
int     		count_s(char *s, char c);
int     		car_s(char *s, char c);
void    		free_all(char **words, int i);

/*
 * prototypes for helper_functions.c file
*/

int				ft_strlen(const char *s);
char			*ft_strdup(const char *s1);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_strcmp(const char *s1, const char *s2);

/*
 * prototypes for fill_stack.c file
*/

t_stack fill_stack(int argc, char **argv);

/*
 * prototypes for read_operations.c file
*/

int				*read_operations();
int				is_operation(char *str);
int				*ft_resize_list(int *old, int *size, int number);
t_operations    word_enum(char *word);

void			print_operations(int *list, int size);

#endif
