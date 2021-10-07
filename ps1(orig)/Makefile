NAME = push_swap.a

NAME_PUSH_SWAP = push_swap

SRC = make_int_array.c make_serious_shit.c make_stacks.c write_error.c\
	sorting_to_stacks.c commands.c print_stack.c pasting_sort.c validation.c pasting_sort_contin.c commands2.c\
	pasting_sort2.c

HEADER = ./includes/push_swap.h

RM = rm -rf 

CC = gcc -g 

CFLAGS = -Wall -Werror -Wextra -I.

OBJS= $(SRC:.c=.o)

all: 	$(NAME)

$(NAME):	$(OBJS)
		make -C ./includes/libft
		ar rcs $(NAME) $(OBJS)
		gcc -g -Wall -Werror -Wextra push_swap.c push_swap.a includes/libft/libft.a -o $(NAME_PUSH_SWAP)

clean:
		$(RM) $(OBJS)

fclean: clean
		rm -f $(NAME)
		rm -f $(NAME_PUSH_SWAP)

re: fclean all

.PHONY: all clean re fclean
