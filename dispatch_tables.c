# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

typedef enum	
{
	oper1,
	oper2,
	oper3,
	oper4
}				operations;

typedef struct	s_enum_word
{
	operations	operation;
	char		*operation_name;
}				t_enum_word;

int				add_func(int a, int b);
int				substract_func(int a, int b);
int				multiplicate_func(int a, int b);
int				divide_func(int a, int b);
operations		word_enum(char *word);

int main()
{	
	int		(*math_func[])(int, int) = {add_func,
		substract_func, multiplicate_func, divide_func};
	printf("%d", math_func[word_enum("Multiply")](14, 11));
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

/*
 * function take string and return a enum
*/

operations	word_enum(char *word)
{
	t_enum_word	functions[] = {
		{oper1, "Add"},
		{oper2, "Substract"},
		{oper3, "Multiply"},
		{oper4, "Divide"}
	};
	int		i = 0;
	while (i < 4)
	{	
		if (!strcmp(functions[i].operation_name, word))
			return (functions[i].operation);
		i++;
	}
	return (0);
}
