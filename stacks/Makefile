# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/24 14:34:08 by mlachheb          #+#    #+#              #
#    Updated: 2021/04/27 09:11:57 by mlachheb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PUSH_SWAP_NAME = push_swap

CHECKER_NAME = checker

PUSH_SWAP_MAIN = push_swap.c

CHECKER_MAIN = checker.c

PUSH_SWAP_SRC = sort_stack.c

CHECKER_SRC = apply_operations.c check_sort.c read_operations.c

SHARED_SRC = check_args.c fatal.c fill_stack.c ft_atoi.c ft_split.c\
			 get_next_line.c helper_functions.c operations.c\
			 opers_functions.c sort_operations.c

PUSH_SWAP_OBJ = sort_stack.o

CHECKER_OBJ = apply_operations.o check_sort.o read_operations.o

SHARED_OBJ = check_args.o fatal.o fill_stack.o ft_atoi.o ft_split.o\
			 get_next_line.o helper_functions.o operations.o\
			 opers_functions.o sort_operations.o


all: $(CHECKER_NAME)

$(CHECKER_NAME):
	gcc -Wall -Wextra -Werror -g -c $(SHARED_SRC)
	gcc -Wall -Wextra -Werror -g -c $(CHECKER_SRC)
	gcc -Wall -Wextra -Werror -g -c $(PUSH_SWAP_SRC)
	gcc -Wall -Wextra -Werror -g $(PUSH_SWAP_MAIN) $(PUSH_SWAP_OBJ) $(SHARED_OBJ) -o $(PUSH_SWAP_NAME)
	gcc -Wall -Wextra -Werror -g $(CHECKER_MAIN) $(CHECKER_OBJ) $(SHARED_OBJ) -o $(CHECKER_NAME)

clean:
	rm -rf $(PUSH_SWAP_OBJ) $(SHARED_OBJ) $(CHECKER_OBJ)

fclean:
	rm -rf $(PUSH_SWAP_NAME) $(CHECKER_NAME)

re: fclean all
