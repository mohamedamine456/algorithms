#include <unistd.h>
#include <stdlib.h>

// ################################ Error ########################################### //

void	fatal()
{
	write(1, "Error\n", 6);
	exit(-1);
}


// ################################### Check ######################################## //

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int		check_args(char **argv)
{
	int		i;
	int		j;

	i = 0;
	while (argv[i] != NULL)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!ft_isdigit(argv[i][j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}


// #################################### Main ####################################### //

int		main(int argc, char **argv)
{
	if (argc < 2)
		fatal();
	else
	{
		if (check_args(&(argv[1])))
			fatal();
		else
		{
			write(1, "All Good", 8);
			exit(0);
		}
	}
}
