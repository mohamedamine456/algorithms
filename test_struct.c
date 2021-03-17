#include <stdio.h>

typedef struct s_two_numbers
{
	int	a;
	int	b;
}				t_two_numbers;

int	add(two_numbers nb)
{
	return (nb.a + nb.b);
}

int	main(void)
{
	printf("%d\n", add(((two_numbers){1, 5})));
}
