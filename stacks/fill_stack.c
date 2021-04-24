#include "stacks.h"

t_stack	fill_stack(int argc, char **argv)
{
	t_stack	stack;
	int		i;

	stack = create_stack(argc - 1);
	i = ft_size_opers(argv) - 1;
	while (argv != NULL && argv[i] != NULL && i > 0)
	{
		stack = push(ft_atoi(argv[i]), stack);
		i--;
	}
	return (stack);
}
