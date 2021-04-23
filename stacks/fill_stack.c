#include "stacks.h"

t_stack	fill_stack(int argc, char **argv)
{
	t_stack	stack;
	int		i;

	stack = create_stack(argc - 1);
	i = 0;
	while (argv != NULL && argv[i + 1] != NULL)
	{
		stack = push(ft_atoi(argv[i + 1]), stack);
		i++;
	}
	return (stack);
}
