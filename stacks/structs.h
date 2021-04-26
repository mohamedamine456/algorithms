#ifndef STRUCTS_H
# define STRUCTS_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int			size;
	int			top;
	long long	*items;
}				t_stack;

#endif
