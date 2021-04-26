# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/24 14:34:08 by mlachheb          #+#    #+#              #
#    Updated: 2021/04/26 14:51:25 by mlachheb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CHECKER_NAME = checker

CHECKER_MAIN = checker.c

CHECKER_SRC = apply_operations.c check_args.c check_sort.c\
			  fatal.c fill_stack.c ft_atoi.c ft_split.c\
			  get_next_line.c helper_functions.c operations.c\
			  opers_functions.c read_operations.c sort_operations.c

CHECKER_OBJ = apply_operations.o check_args.o check_sort.o\
			  fatal.o fill_stack.o ft_atoi.o ft_split.o\
			  get_next_line.o helper_functions.o operations.o\
			  opers_functions.o read_operations.o sort_operations.o\

CHECKER_LIB = checker_lib

all: $(CHECKER_NAME)

$(CHECKER_NAME):
	gcc -Wall -Wextra -Werror -g -c $(CHECKER_SRC)
	ar rc $(CHECKER_LIB) $(CHECKER_OBJ)
	ranlib $(CHECKER_LIB)
	gcc -Wall -Wextra -Werror -g $(CHECKER_MAIN) $(CHECKER_LIB) -o $(CHECKER_NAME)

clean:
	rm -rf $(CHECKER_OBJ)

fclean:
	rm -rf $(CHECKER_NAME)

re: fclean all
