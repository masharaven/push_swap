NAME = push_swap

SRC = 

OBJS = ${SRC:.c=.o}



$(NAME) 
		gcc push_swap.c make_int_array.c make_serious_shit.c ./includes/libft/*.c


include $(-Iinclude)