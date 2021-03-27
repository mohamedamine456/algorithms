#ifndef STACK_OPERATIONS_H
# define STACK_OPERATIONS_H
# include <unistd.h>
# include <stdlib.h>

typedef struct s_rotate_var
{
	int	*a;
	int	*b;
	int	topa;
	int	topb;
	int	sizea;
	int	sizeb;
}				t_rotate_var;

int		is_empty(int top);
int		is_full(int top, int size);
int		peek(int *stack, int top);
void	pop(int *top);
void	push(int to_push, int *stack, int *top, int size);
void	s_a_b(int *stack, int *top, int size);
void	s_s(int *a, int *b, int *topa, int *topb, int sizea, int sizeb);
void	p_a_b(int *st1, int *st2, int *topst1, int *topst2, int sizest2);
void	r_a_b(int *stack, int top, int size);
void	r_r(int *a, int *b, int topa, int topb, int sizea, int sizeb);
void	r_r_a_b(int *stack, int top, int size);
void	r_r_r(int *a, int *b, int topa, int topb, int sizea, int sizeb);

#endif
