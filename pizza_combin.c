# include <stdio.h>

typedef struct	s_three_numbers
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;
}				t_three_numbers;

void			give_combin1(t_three_numbers *n1, t_three_numbers n_max, unsigned int nb)
{
	unsigned int	rest;


	// calculate c;
	n1->c = nb / 4;
	rest = nb % 4;
	if (n1->c > n_max.c)
		n1->c = n_max.c;
	else if (n1->c <= n_max.c && rest == 1)
		n1->c = n1->c - 1;
	nb = nb - (4 * n1->c);

	// calculate b;
	n1->b = nb / 3;
	rest = nb % 3;
	if (n1->b > n_max.b)
		n1->b = n_max.b;
	else if (n1->b <= n_max.b && rest == 1)
		n1->b = n1->b - 1;
	nb = nb - (3 * n1->b);

	// calculate s;
	n1->a = nb / 2;
	if (n1->a > n_max.a)
		n1->a = n_max.a;
}

void			give_combin2(t_three_numbers *n2, t_three_numbers n_max, unsigned int nb)
{
	unsigned int	rest;	

	// calculate b;
	n2->b = nb / 3;
	rest = nb % 3;
	if (n2->b > n_max.b)
		n2->b = n_max.b;
	else if (n2->b <= n_max.b && rest == 1)
		n2->b = n2->b - 1;
	nb = nb - (3 * n2->b);

	// calculate c;
	n2->c = nb / 4;
	rest = nb % 4;
	if (n2->c > n_max.c)
		n2->c = n_max.c;	
	nb = nb - (4 * n2->c);

	// calculate s;
	n2->a = nb / 2;
	if (n2->a > n_max.a)
		n2->a = n_max.a;
}

void			calculate_teams(t_three_numbers *n, t_three_numbers n_max, unsigned int nb_pizzas)
{
	unsigned int	sum1, sum2;
	t_three_numbers	n1, n2;

	give_combin1(&n1, n_max, nb_pizzas);
	sum1 = n1.a * 2 + n1.b * 3 + n1.c * 4;
	give_combin2(&n2, n_max, nb_pizzas);
	sum2 = n2.a * 2 + n2.b * 3 + n2.c * 4;
	if (nb_pizzas - sum1 <= nb_pizzas - sum2)
	{
		n->a = n1.a;
		n->b = n1.b;
		n->c = n1.c;
	}
	else
	{
		n->a = n2.a;
		n->b = n2.b;
		n->c = n2.c;
	}
}

int				main()
{
	t_three_numbers n_max;
	t_three_numbers n;
	unsigned int	nb_pizzas;

	nb_pizzas = 12;
	n_max.a = 1;
	n_max.b = 2;
	n_max.c = 1;
	calculate_teams(&n, n_max, nb_pizzas);
	printf("%u, %u, %u", n.a, n.b, n.c);
}
