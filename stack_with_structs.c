# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_stack_items
{
    int						number;
    struct s_stack_items	*next;
}							t_stack_items;

void	fatal()
{
	write(1, "Error\n", 6);
	exit(-1);
}

t_stack_items	*new_item()
{
	t_stack_items *new;

	new = (t_stack_items *)malloc(sizeof(t_stack_items));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	return (new);
}

void	push(int number, t_stack_items **top)
{
	t_stack_items *tmp;

	tmp = new_item();
	if (tmp == NULL)
		fatal();
	else
	{
		tmp->number = number;
		tmp->next = *top;
		(*top) = tmp;
	}
}

int		is_empty(t_stack_items *top)
{
	if (top == NULL)
		return (1);
	else
		return (0);
}

int		peek(t_stack_items *top)
{
	if (!is_empty(top))
		return (top->number);
}

void	pop(t_stack_items **top)
{
	t_stack_items *tmp;

	if (!is_empty(*top))
	{
		tmp = *top;
		*top = (*top)->next;
		tmp->next = NULL;
		free(tmp);
	}
}

void	print_all(t_stack_items *top)
{
	t_stack_items *tmp;

	tmp = top;
	while (tmp != NULL)
	{
		printf("%9d", tmp->number);
		tmp = tmp->next;
	}
}

int main() 
{ 
    t_stack_items *top;
	top = NULL;

    push(2, &top); 
    push(1, &top); 
    push(3, &top); 
    push(6, &top);
	push(5, &top);
    push(8, &top);
	printf("\n---------------------------------------------------------\n");
    print_all(top); 
    pop(&top); 
    pop(&top); 
	printf("\n---------------------------------------------------------\n");
	print_all(top);
    return 0; 
}