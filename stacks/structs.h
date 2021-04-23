#ifndef STRUCTS_H
# define STRUCTS_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int			size;
	int			top;
	int			*items;
}				t_stack;

typedef enum e_operations
{
	sa,
	sb,
	ss,
	pa,
	pb,
	ra,
	rb,
	rr,
	rra,
	rrb,
	rrr
}	t_operations;

typedef struct s_enum_operation
{
	t_operations	index;
	char			*name;
}				t_enum_operation;

#endif
