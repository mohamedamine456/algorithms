#include "stacks.h"

t_stack	fill_stack(int argc, char **argv)
{
	t_stack	stack;
	int		i;
	long	number;

	stack = create_stack(argc - 1);
	i = ft_size_opers(argv) - 1;
	while (argv != NULL && argv[i] != NULL && i > 0)
	{
		number = ft_atoi(argv[i]);
		if (in_stack(number, stack.items, stack.top))
		{
			free(stack.items);
			fatal();
		}
		stack = push(number, stack);
		i--;
	}
	return (stack);
}

int		in_stack(long number, long *table, int size)
{
	int i;

	i = 0;
	while (i <= size)
	{
		if (number == table[i])
			return (1);
		i++;
	}
	return (0);
}
