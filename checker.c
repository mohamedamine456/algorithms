#include <stdio.h>

// ################################ Error ########################################### //

void		fatal()
{
	write(1, "Error\n", 6);
	exit(-1);
}


// ################################### Check ######################################## //
int 


// ########################################################################### //

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else
	{
		if (check_args(&(args[1])))
			write(1, "Error\n", 6);
	}
}
