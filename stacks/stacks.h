/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 10:46:18 by mlachheb          #+#    #+#             */
/*   Updated: 2021/04/26 13:41:28 by mlachheb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACKS_H
# define STACKS_H
# include "structs.h"
# define BUFFER_SIZE 1
# define OPERS "sa sb ss pa pb ra rb rr rra rrb rrr"

/*
 * prototypes for check_args.c file
*/

int				ft_isdigit(int c);
int				check_args(char **args);

/*
 * prototypes for fatal.c file
*/

void			fatal();
void			ok_ko(int retv);

/*
 * prototypes for operations.c file
*/

t_stack 		create_stack(int size);
int     		is_empty(int top);
int     		is_full(int top, int size);
long long		peek(t_stack stack);
void    		pop(int *top);
t_stack			push(long long new, t_stack stack);
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

long long		number(const char *str, int neg);
long long		ft_atoi(const char *str);

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
char			**ft_resize_tab(char **old, char *chaine);

/*
 * prototypes for fill_stack.c file
*/

t_stack			fill_stack(int argc, char **argv);
int				in_stack(long long number, long long *table, int size);

/*
 * prototypes for read_operations.c file
*/

char			**read_operations();
int				is_operation(char *str);

/*
 * prototypes for apply_operations.c file
*/

t_stack			apply_operations(t_stack stack_a, char **opers);

/*
 * prototypes for check_sort.c file
*/

int				check_sort(t_stack stack);

/*
 * prototypes for opers_functions.c file
*/
int				ft_size_opers(char **tab);
char			**ft_resize_opers(char **old, char *chaine);
void			ft_free_opers(char **opers);
void			print_operations(char **opers);

#endif
