# include "stacks.h"

void	print_operations(int *list, int size)
{
	int	i;

	i = 0;
	while (list != NULL && i < size)
	{
		printf("%9d", list[i]);
		i++;
	}
	printf("\n");
}
