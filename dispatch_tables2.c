# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int				add_func(int a, int b);
int				substract_func(int a, int b);
int				multiplicate_func(int a, int b);
int				divide_func(int a, int b);

int main()
{	
	int		(*math_func[])(int, int) = {['A'] = add_func,
		['S'] = substract_func, ['M'] = multiplicate_func, ['D'] = divide_func};
	printf("%d", math_func['D'](14, 11));
	return (0);
}

/*
 *	function of mathematic operations
*/

int		add_func(int a, int b)
{
	return (a + b);
}

int		substract_func(int a, int b)
{
	return (a - b);
}

int		multiplicate_func(int a, int b)
{
	return (a * b);
}

int		divide_func(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
		return (0);
}
