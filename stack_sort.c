#include <stdio.h>
#include "stack_operations.h"

/**
 * Sort Function to sort stack using another stack
*/

void	sort_stack(int *a, int top, int size, int fa)
{
	 
}


// ############################################################################################### //


/**
 * Main function for read args and test
*/

int		main(int argc, char **argv)
{
	int		*a;
	int		fa;
	int		topa = -1;
	int		sizea;
	int 	i = 0;

	if (argc < 2)
	{
		printf("Error Args<%s>.\n", argv[0]);
		return (0);
	}
	else
	{
		a = (int *)malloc(sizeof(int) * (argc - 1));
		if (a == NULL)
		{
			printf("Error Allocation\n");
			return (0);
		}
		else
		{
			sizea = argc - 1;
			while (sizea - i > 0)
			{
				push(atoi(argv[sizea - i]), a, &topa, sizea);
				i++;
			}
			fa = atoi(argv[sizea]);
			//sort_stack(a, top, size, fa);
			i = sizea - 1;
			//r_a_b(a, topa, sizea);
			while (i >= 0)
			{
				printf("%7d", a[i]);
				i--;
			}
			printf("\n-----------------------------------------------------------------------\n");
			i = sizea - 1;
			r_r_a_b(a, topa, sizea);
			while (i >= 0)
			{
				printf("%7d", a[i]);
				i--;
			}
		}
	}
}
