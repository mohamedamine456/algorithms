#include "stacks.h"

int		*read_operations(int *len)
{
	int		size;
	int		number;
	int		*list_opers;
	char	*buff;

	size = 0;
	list_opers = NULL;
	while (get_next_line(0, &buff) > 0)
	{
		if (is_operation(buff))
		{
			number = word_enum(buff);
			list_opers = ft_resize_list(list_opers, &size, number);
		}
		free(buff);
	}
	*len = size;
	return (list_opers);
}

int		is_operation(char *str)
{
	int		i;
	char	**opers;

	i = 0;
	opers = ft_split(OPERS, ' ');
	if (str == NULL || opers == NULL)
		return (0);
	while (i < 11)
	{
		if (!ft_strcmp(str, opers[i]))
			return (1);
		i++;
	}
	return (0);
}

int		*ft_resize_list(int *old, int *size, int number)
{
	int	*new;
	int	i;
	int	len;

	i = 0;
	if (old == NULL)
		len = 0;
	else
		len = *size;
	new = (int *)malloc((len + 1) * sizeof(int));
	while (i < len)
	{
		new[i] = old[i];
		i++;
	}
	new[i] = number;
	*size = i + 1;
	free(old);
	return (new);
}


t_operations	word_enum(char *word)
{
	t_enum_operation operations[] = {
		{sa, "sa"},
		{sb, "sb"},
		{ss, "ss"},
		{pa, "pa"},
		{pb, "pb"},
		{ra, "ra"},
		{rb, "rb"},
		{rr, "rr"},
		{rra, "rra"},
		{rrb, "rrb"},
		{rrr, "rrr"}
	};
	int		i;

	i = 0;
	while (i < 11)
	{
		if (!ft_strcmp(operations[i].name, word))
			return (operations[i].index);
		i++;
	}
	return (0);
}
